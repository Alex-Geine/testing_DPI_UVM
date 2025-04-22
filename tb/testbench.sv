module testbench;
    import "DPI-C" function void conv_encoder_dpi(
        input  byte input_bits[],
        output byte output_bits[]
    );

    logic clk = 0;
    logic rst_n = 1;
    logic data_in;
    logic [1:0] dut_output;

    // Генерация тактов

    // Подключение DUT
    conv_encoder dut (
        .clk(clk),
        .rst_n(rst_n),
        .data_in(data_in),
        .data_out(dut_output)
    );

    // Тестовый процесс
    initial begin
        logic input_bits[4];                             // Входная последовательность: 1, 0, 1, 1
        logic model_bits[8];                             // Выход C++-модели (4 бита → 8 бит)
        logic [1:0] expected_bits[4];                    // Ожидаемые выходы DUT

        input_bits[0] = 1;
        input_bits[1] = 0;
        input_bits[2] = 1;
        input_bits[3] = 1;

        // Сброс
        rst_n = 0;
        rst_n = 1;

        // Вызов C++-модели
        conv_encoder_dpi(input_bits, model_bits);

        // Пошаговая подача битов в DUT и сравнение
        for (int i = 0; i < 4; ++i) begin
            data_in = input_bits[i];

            // Сравнение с C++-моделью
            expected_bits[i] = {model_bits[2*i + 1], model_bits[2*i]};
            if (dut_output !== expected_bits[i]) begin
                $display("ERROR: Mismatch at bit %0d! Model: %b, DUT: %b",
                    i, expected_bits[i], dut_output);
                $finish(1);
            end else begin
                $display("Bit %0d: OK (Model=%b, DUT=%b)",
                    i, expected_bits[i], dut_output);
            end
        end

        $display("TEST PASSED!");
        $finish(0);
    end
endmodule