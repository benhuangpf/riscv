module BindsTo_1_MemData(
  input         clock,
  input         io_bundleMemDataControl_ctrlLoad,
  input         io_bundleMemDataControl_ctrlStore,
  input         io_bundleMemDataControl_ctrlSigned,
  input  [1:0]  io_bundleMemDataControl_ctrlLSType,
  input  [31:0] io_resultALU,
  input  [31:0] io_dataStore,
  output [31:0] io_result
);

initial begin
  $readmemh("src/test/scala/rv32isc/MemData.hex", MemData.mem);
end
                      endmodule

bind MemData BindsTo_1_MemData BindsTo_1_MemData_Inst(.*);