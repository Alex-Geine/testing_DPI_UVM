module conv_encoder (
    input  logic clk,
    input  logic rst_n,
    input  logic data_in,
    output logic [1:0] data_out  // 2 выходных бита
);
    logic [2:0] shift_reg;  // 3-битный сдвиговый регистр

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) shift_reg <= '0;
        else        shift_reg <= {shift_reg[1:0], data_in};
    end

    // Полиномы: G0 = 1011 (x³ + x + 1), G1 = 1101 (x³ + x² + 1)
    assign data_out[0] = shift_reg[2] ^ shift_reg[0];  // G0
    assign data_out[1] = shift_reg[2] ^ shift_reg[1];  // G1
endmodule