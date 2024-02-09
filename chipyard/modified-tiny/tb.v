// // The testbench feeds initial instruction and data and checks the result of data memory.d

// `timescale 1 ns/10 ps

// `define CYCLE 2       // Do not change this value!!!
// `define END_CYCLE 200 // You can modify your maximum cycles

// // `include "CHIP.v"
// // `include "memory.v"
// // `define SIZE_TEXT 2048  // You can change the size
// // `define SIZE_DATA 1024  // You can change the size
// // `define SIZE_STACK 1024 // You can change the size

// // `ifdef leaf
// //     `define MEM_TEXT "./leaf/leaf_text.txt"
// //     `define MEM_DATA "./leaf/leaf_data.txt"
// //     `define MEM_DATA_ANS "./leaf/leaf_data_ans.txt"
// // `endif

// // `ifdef fact
// //     `define MEM_TEXT "./fact/fact_text.txt"
// //     `define MEM_DATA "./fact/fact_data.txt"
// //     `define MEM_DATA_ANS "./fact/fact_data_ans.txt"
// // `endif

// // `ifdef fibo
//     // `define MEM_TEXT "./fibo/fibo_text.txt"
//     // `define MEM_DATA "./fibo/fibo_data.txt"
//     // `define MEM_DATA_ANS "./fibo/fibo_data_ans.txt"
// // `endif

// `define MEM_TEXT "./text.txt"

// module Final_tb;

//     reg         clk, rst_n ;
    
    
//     // RocketTile chip0(
//     //     .clock(clk),
//     //     .reset(rst_n)
//     // );
    

//     // Initialize the data memory
//     initial begin
//         // $fsdbDumpfile("Final.fsdb");            
//         // $fsdbDumpvars(0,Final_tb,"+mda");
//         $dumpfile("Final.vcd");            
//         $dumpvars(0,Final_tb);

//         $display("------------------------------------------------------------\n");
//         $display("START!!! Simulation Start .....\n");
//         $display("------------------------------------------------------------\n");
        
//         clk = 0;
//         rst_n = 1'b1;

//         #(`CYCLE*100.0) rst_n = 1'b0;
//         // #(`CYCLE*0.5)
//         // $readmemh (`MEM_TEXT, chip0.frontend.icache.mem_text.mem);
            
        
//     end

//     initial begin
//         #(`CYCLE*`END_CYCLE)
        
//         $display("============================================================\n");
//         $display("Simulation time is longer than expected.");
//         $display("The test result is .....FAIL :(\n");
//         $display("============================================================\n");
        
//         $finish;
//     end
    
//     // always @(negedge clk) begin
//         // a0 = chip0.reg0.mem[10];
//         // ans = mem_data_ans[1];
//         // a5 = chip0.reg0.mem[15];
//     // end

//     // always @(negedge clk) begin
//         // if (mem_addr_I == 32'h000010E4) begin
//         //     // error_num = 0;
//         //     $display("  Correct ans: %d  Your ans: %d", mem_data_ans[1], chip0.reg0.mem[10]);
//         //     if (chip0.reg0.mem[10] == mem_data_ans[1]) begin
//         //         $display("============================================================\n");
//         //         $display("Success!");
//         //         $display("The test result is .....PASS :)\n");
//         //         $display("============================================================\n");
//         //         $finish;
//         //     end
//         //     else begin
//         //         $display(" ");
//         //         $display("============================================================\n");
//         //         // $display("There are total %4d errors in the data memory", error_num);
//         //         $display("The test result is .....FAIL :(\n");
//         //         $display("============================================================\n");
//         //     end
//         // end
//         // if (mem_addr_I == 32'h000000c0) $finish;
//     // end

//     // always @(negedge clk) begin
//     //     if (mem_addr_I == eof) begin
//     //         error_num = 0;
//     //         for (i=0; i<`SIZE_DATA; i=i+1) begin
//     //             if (mem_data.mem[i] !== mem_data_ans[i]) begin
//     //                 if (error_num == 0)
//     //                     $display("Error!");
//     //                 error_num = error_num + 1;
//     //                 $display("  Addr = 0x%8h  Correct ans: 0x%8h  Your ans: 0x%8h", mem_data.mem_addr[i], mem_data_ans[i], mem_data.mem[i]);
//     //             end
//     //         end
//     //         if (error_num > 0) begin
//     //             $display(" ");
//     //             $display("============================================================\n");
//     //             $display("There are total %4d errors in the data memory", error_num);
//     //             $display("The test result is .....FAIL :(\n");
//     //             $display("============================================================\n");
//     //         end
//     //         else begin
//     //             $display("============================================================\n");
//     //             $display("Success!");
//     //             $display("The test result is .....PASS :)\n");
//     //             $display("============================================================\n");
//     //         end
//     //         $finish;
//     //     end
//     // end
        
//     always #(`CYCLE*0.5) clk = ~clk;
        
// endmodule
