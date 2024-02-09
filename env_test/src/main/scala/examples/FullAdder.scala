package examples

import chisel3._

import scala.io.Source
import utils._

import chisel3.util.experimental.loadMemoryFromFileInline

class AdderIO extends Bundle {
  val bundleAluControl = new BundleAluControl()
    val a    = Input(UInt(1.W))
    val b    = Input(UInt(1.W))
    val cin  = Input(UInt(1.W))
    val sum  = Output(UInt(1.W))
    val cout = Output(UInt(1.W))
}

class FullAdder extends Module {
  val io = IO(new AdderIO())
  // val io = IO(new Bundle {
  //   val a    = Input(UInt(1.W))
  //   val b    = Input(UInt(1.W))
  //   val cin  = Input(UInt(1.W))
  //   val sum  = Output(UInt(1.W))
  //   val cout = Output(UInt(1.W))
  // })

  // val ans = Source.fromFile("src/test/scala/examples/ans.txt").getLines().toArray
  val mem = Mem(1024, UInt(32.W))
  loadMemoryFromFileInline(
            mem,
            "src/test/scala/examples/MemInst.hex"
        )
  
  
  // Generate the sum
  val a_xor_b = io.a ^ io.b
  io.sum := a_xor_b ^ io.cin
  // Generate the carry
  val a_and_b = io.a & io.b
  val b_and_cin = io.b & io.cin
  val a_and_cin = io.a & io.cin
  io.cout := a_and_b | b_and_cin | a_and_cin
}
// Generate Verilog file
// import chisel3.stage.ChiselStage
// object u_FullAdder extends App{
//     (new ChiselStage).emitVerilog(new FullAdder)
// }
