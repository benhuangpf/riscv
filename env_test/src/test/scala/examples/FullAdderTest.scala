package examples

// import org.scalatest._
import chisel3._
import chisel3.experimental.BundleLiterals._
import chiseltest._
// import org.scalatest.freespec.AnyFreeSpec
import org.scalatest.flatspec.AnyFlatSpec
import java.util.Random

import scala.io.Source

class FullAdderTest extends AnyFlatSpec with ChiselScalatestTester {
    // val file = new File("src/test/scala/rv32isc/ans.txt")
    // val ans = Source.fromResource("src/test/scala/examples/ans.txt").getLines().toArray
    behavior of "Module"
    it should "do something" in{
// class FullAdderTest extends AnyFreeSpec with ChiselScalatestTester{
//     "do something" in{
        test(new FullAdder() ). withAnnotations (Seq( VerilatorBackendAnnotation, WriteVcdAnnotation )){ c =>
            
            val randNum = new Random
            val a    = randNum.nextInt(2)
            val b    = randNum.nextInt(2)
            val cin  = randNum.nextInt(2)
            val res  = a + b + cin
            val sum  = res & 1
            val cout = (res >> 1) & 1
            c.io.a.poke(a.U)
            c.io.b.poke(b.U)
            c.io.cin.poke(cin.U)
            c.clock.step(1)
            c.io.sum.expect(sum.U)
            c.io.cout.expect(cout.U)
        }
    }
}
