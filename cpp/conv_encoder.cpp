#include <vector>
#include "svdpi.h"

class ConvEncoder {
    uint8_t state;  // 3-битный регистр (K=3)
    const uint8_t g0 = 0b1011;  // Полином G0 (x³ + x + 1)
    const uint8_t g1 = 0b1101;  // Полином G1 (x³ + x² + 1)
public:
    ConvEncoder() : state(0) {}

    // Кодирование одного бита → 2 выходных бита
    std::pair<uint8_t, uint8_t> encode_bit(uint8_t bit) {
        state = ((state << 1) | (bit & 1)) & 0b111;  // Обновляем состояние
        uint8_t out0 = 0, out1 = 0;
        for (int i = 0; i < 4; ++i) {
            out0 ^= ((g0 >> i) & 1) & ((state >> (3 - i)) & 1);
            out1 ^= ((g1 >> i) & 1) & ((state >> (3 - i)) & 1);
        }
        return {out0, out1};
    }
};

// DPI-функция для кодирования массива битов
extern "C" void conv_encoder_dpi(
    const svOpenArrayHandle input,
    svOpenArrayHandle output
) {
    ConvEncoder encoder;
    const uint8_t* in = (const uint8_t*)svGetArrayPtr(input);
    uint8_t* out = (uint8_t*)svGetArrayPtr(output);
    int size = svSize(input, 1);

    for (int i = 0; i < size; ++i) {
        auto [bit0, bit1] = encoder.encode_bit(in[i]);
        out[2*i] = bit0;    // Первый выходной бит
        out[2*i + 1] = bit1; // Второй выходной бит
    }
}