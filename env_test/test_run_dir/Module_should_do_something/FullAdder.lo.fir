FIRRTL version 1.2.0
circuit FullAdder :
  module FullAdder :
    input clock : Clock
    input reset : UInt<1>
    input io_bundleAluControl_ctrlALUSrc : UInt<1> @[src/main/scala/examples/FullAdder.scala 20:14]
    input io_bundleAluControl_ctrlJAL : UInt<1> @[src/main/scala/examples/FullAdder.scala 20:14]
    input io_bundleAluControl_ctrlOP : UInt<4> @[src/main/scala/examples/FullAdder.scala 20:14]
    input io_bundleAluControl_ctrlSigned : UInt<1> @[src/main/scala/examples/FullAdder.scala 20:14]
    input io_bundleAluControl_ctrlBranch : UInt<1> @[src/main/scala/examples/FullAdder.scala 20:14]
    input io_a : UInt<1> @[src/main/scala/examples/FullAdder.scala 20:14]
    input io_b : UInt<1> @[src/main/scala/examples/FullAdder.scala 20:14]
    input io_cin : UInt<1> @[src/main/scala/examples/FullAdder.scala 20:14]
    output io_sum : UInt<1> @[src/main/scala/examples/FullAdder.scala 20:14]
    output io_cout : UInt<1> @[src/main/scala/examples/FullAdder.scala 20:14]

    mem mem : @[src/main/scala/examples/FullAdder.scala 30:16]
      data-type => UInt<32>
      depth => 1024
      read-latency => 0
      write-latency => 1
      read-under-write => undefined
    node a_xor_b = xor(io_a, io_b) @[src/main/scala/examples/FullAdder.scala 38:22]
    node _io_sum_T = xor(a_xor_b, io_cin) @[src/main/scala/examples/FullAdder.scala 39:21]
    node a_and_b = and(io_a, io_b) @[src/main/scala/examples/FullAdder.scala 41:22]
    node b_and_cin = and(io_b, io_cin) @[src/main/scala/examples/FullAdder.scala 42:24]
    node a_and_cin = and(io_a, io_cin) @[src/main/scala/examples/FullAdder.scala 43:24]
    node _io_cout_T = or(a_and_b, b_and_cin) @[src/main/scala/examples/FullAdder.scala 44:22]
    node _io_cout_T_1 = or(_io_cout_T, a_and_cin) @[src/main/scala/examples/FullAdder.scala 44:34]
    io_sum <= _io_sum_T @[src/main/scala/examples/FullAdder.scala 39:10]
    io_cout <= _io_cout_T_1 @[src/main/scala/examples/FullAdder.scala 44:11]
