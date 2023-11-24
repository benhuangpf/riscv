// The testbench feeds initial instruction and data and checks the result of data memory.d

`timescale 1 ns/10 ps

`define CYCLE 10       // Do not change this value!!!
`define END_CYCLE 2800 // You can modify your maximum cycles

`include "Top.sv"

module tb_Top;

    reg         clk, rst_n ;
    
    Top Top0(
        .clock(clk),
        .reset(rst_n)
    );

    // Initialize the data memory
    initial begin
        // $fsdbDumpfile("Final.fsdb");            
        // $fsdbDumpvars(0,Final_tb,"+mda");
        $dumpfile("Final.vcd");            
        $dumpvars(0,tb_Top);
        
        clk = 1;
        rst_n = 1'b0;

        #(`CYCLE*0.5) rst_n = 1'b0;
        #(`CYCLE*2.0) rst_n = 1'b1;        
    end

    initial begin
        #(`CYCLE*`END_CYCLE)        
        $finish;
    end

    always #(`CYCLE*0.5) clk = ~clk;
        
endmodule
