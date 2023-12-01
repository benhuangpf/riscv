FIRRTL version 1.2.0
circuit FullAdder :
  module FullAdder :
    input clock : Clock
    input reset : UInt<1>
    input io_bundleAluControl_ctrlALUSrc : UInt<1> @[src/main/scala/examples/FullAdder.scala 18:14]
    input io_bundleAluControl_ctrlJAL : UInt<1> @[src/main/scala/examples/FullAdder.scala 18:14]
    input io_bundleAluControl_ctrlOP : UInt<4> @[src/main/scala/examples/FullAdder.scala 18:14]
    input io_bundleAluControl_ctrlSigned : UInt<1> @[src/main/scala/examples/FullAdder.scala 18:14]
    input io_bundleAluControl_ctrlBranch : UInt<1> @[src/main/scala/examples/FullAdder.scala 18:14]
    input io_a : UInt<1> @[src/main/scala/examples/FullAdder.scala 18:14]
    input io_b : UInt<1> @[src/main/scala/examples/FullAdder.scala 18:14]
    input io_cin : UInt<1> @[src/main/scala/examples/FullAdder.scala 18:14]
    output io_sum : UInt<1> @[src/main/scala/examples/FullAdder.scala 18:14]
    output io_cout : UInt<1> @[src/main/scala/examples/FullAdder.scala 18:14]

    node a_xor_b = xor(io_a, io_b) @[src/main/scala/examples/FullAdder.scala 29:22]
    node _io_sum_T = xor(a_xor_b, io_cin) @[src/main/scala/examples/FullAdder.scala 30:21]
    node a_and_b = and(io_a, io_b) @[src/main/scala/examples/FullAdder.scala 32:22]
    node b_and_cin = and(io_b, io_cin) @[src/main/scala/examples/FullAdder.scala 33:24]
    node a_and_cin = and(io_a, io_cin) @[src/main/scala/examples/FullAdder.scala 34:24]
    node _io_cout_T = or(a_and_b, b_and_cin) @[src/main/scala/examples/FullAdder.scala 35:22]
    node _io_cout_T_1 = or(_io_cout_T, a_and_cin) @[src/main/scala/examples/FullAdder.scala 35:34]
    io_sum <= _io_sum_T @[src/main/scala/examples/FullAdder.scala 30:10]
    io_cout <= _io_cout_T_1 @[src/main/scala/examples/FullAdder.scala 35:11]
