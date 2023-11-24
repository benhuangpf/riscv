module FullAdder(
  input        clock,
  input        reset,
  input        io_bundleAluControl_ctrlALUSrc, // @[src/main/scala/examples/FullAdder.scala 18:14]
  input        io_bundleAluControl_ctrlJAL, // @[src/main/scala/examples/FullAdder.scala 18:14]
  input  [3:0] io_bundleAluControl_ctrlOP, // @[src/main/scala/examples/FullAdder.scala 18:14]
  input        io_bundleAluControl_ctrlSigned, // @[src/main/scala/examples/FullAdder.scala 18:14]
  input        io_bundleAluControl_ctrlBranch, // @[src/main/scala/examples/FullAdder.scala 18:14]
  input        io_a, // @[src/main/scala/examples/FullAdder.scala 18:14]
  input        io_b, // @[src/main/scala/examples/FullAdder.scala 18:14]
  input        io_cin, // @[src/main/scala/examples/FullAdder.scala 18:14]
  output       io_sum, // @[src/main/scala/examples/FullAdder.scala 18:14]
  output       io_cout // @[src/main/scala/examples/FullAdder.scala 18:14]
);
  wire  a_xor_b = io_a ^ io_b; // @[src/main/scala/examples/FullAdder.scala 29:22]
  wire  a_and_b = io_a & io_b; // @[src/main/scala/examples/FullAdder.scala 32:22]
  wire  b_and_cin = io_b & io_cin; // @[src/main/scala/examples/FullAdder.scala 33:24]
  wire  a_and_cin = io_a & io_cin; // @[src/main/scala/examples/FullAdder.scala 34:24]
  assign io_sum = a_xor_b ^ io_cin; // @[src/main/scala/examples/FullAdder.scala 30:21]
  assign io_cout = a_and_b | b_and_cin | a_and_cin; // @[src/main/scala/examples/FullAdder.scala 35:34]
endmodule
