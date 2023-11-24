package rv32isc

import chisel3._
import chiseltest._
import chisel3.util._
import org.scalatest.flatspec.AnyFlatSpec

import java.io.PrintWriter
import java.io.File

import config.Configs._

import scala.io.Source
// import chisel3.util.experimental.loadMemoryFromFile
// import firrtl.annotations.MemoryLoadFileType

// val ans = Source.fromResource("ans.txt").getLines().mkString
trait TopTestFunc {

    def testFn(dut: Top): Unit = {
        
        dut.clock.setTimeout(0)
        // var ans = 0
        // val source = Source.fromFile("memory/data/MemData_ans.txt")
        // for (line <- source.getLines()) {
        //     ans = line.toInt
        // }      
        dut.clock.step(1)      
        while (dut.io.inst.peekInt() != 0) {
            if (dut.io.addr.peekInt() == 0xa8) {
                println("rs2", dut.io.rs2.peekInt())
                println("ans", dut.io.ans.read)                    
                if (dut.io.rs2.peekInt() == dut.io.ans.read)
                    println("The answer is correct.")
                else println("The answer is wrong.")
            }
            dut.clock.step(1)
        }
    }
}

class TopTest extends AnyFlatSpec with ChiselScalatestTester with TopTestFunc {
    "Top" should "pass" in {
        test(new Top) { dut =>
            testFn(dut)
        }
    }
    // "Top" should "wave" in {
    //     test(new Top). withAnnotations (Seq( VerilatorBackendAnnotation, WriteVcdAnnotation )) { dut =>
    //         testFn(dut)
    //     }
    // }
}


// class TopTest extends AnyFlatSpec with ChiselScalatestTester{
    // val ansmem = Mem(MEM_DATA_SIZE, UInt(DATA_WIDTH.W))
    // loadMemoryFromFile(
    //         ansmem,
    //         "src/test/scala/rv32isc/ans.hex",
    //         MemoryLoadFileType.Hex
    //     )
    // val dataLoad = WireDefault(0.U(DATA_WIDTH.W))
    // val ansLoad = WireDefault(0.U(DATA_WIDTH.W))
    // val DATA_ADDR: Long = 0x00000000
    // var error_num = 0
    // val file = new File("src/test/scala/rv32isc/ans.txt")

    // "Top" should "data" in{
    //     test(new Top){ dut =>
    //         dut.clock.setTimeout(0)
    //         var ans = 0
    //         val source = Source.fromFile("memory/data/MemData_ans.txt")
    //         for (line <- source.getLines()) {
    //             ans = line.toInt
    //         }            
    //         while (dut.io.inst.peekInt() != 0) {
    //             if (dut.io.addr.peekInt() == 0xa8) {
    //                 // dut.io.rs2.expect(ans)
    //                 println("rs2", dut.io.rs2.peekInt())
    //                 println("ans", ans)                    
    //                 if (dut.io.rs2.peekInt() == ans)
    //                     println("The answer is correct.")
    //                 else println("The answer is wrong.")
    //                 // var i = 0
    //                 // for (i <- 0 until 32){
    //                 //     if(mem[i] != dut.memData.mem[i])
    //                 //     error_num += 1
    //                 // }
    //                 // dataLoad := dut.memData.mem.read("b100".U)
    //                 // ansLoad := ansmem.read(DATA_ADDR)
    //                 // if(dataLoad != ansload)
    //                 // println("error")
    //             }
    //             dut.clock.step(1)
    //         }      
    //         // if (error_num != 0)       println("error")
    //     }
    // }

    // "Top" should "pass" in{
    //     test(new Top) { dut =>
    //         dut.clock.setTimeout(0)
    //         var ans = 0
    //         val source = Source.fromFile("memory/data/MemData_ans.txt")
    //         for (line <- source.getLines()) {
    //             ans = line.toInt
    //         }            
    //         while (dut.io.addr.peekInt() != 0xff) {
    //             if (dut.io.addr.peekInt() == 0xa8) {
    //                 println("rs2", dut.io.rs2.peekInt())
    //                 println("ans", ans)                    
    //                 if (dut.io.rs2.peekInt() == ans)
    //                     println("The answer is correct.")
    //                 else println("The answer is wrong.")
    //             }
    //             dut.clock.step(1)
    //         }      
    //     }
    // }

    // "Top" should "wave" in{
    //     test(new Top). withAnnotations (Seq( VerilatorBackendAnnotation, WriteVcdAnnotation )) { dut =>
    //         dut.clock.setTimeout(0)
    //         var ans = 0
    //         val source = Source.fromFile("memory/data/MemData_ans.txt")
    //         for (line <- source.getLines()) {
    //             ans = line.toInt
    //         }            
    //         while (dut.io.addr.peekInt() != 0xff) {
    //             if (dut.io.addr.peekInt() == 0xa8) {
    //                 println("rs2", dut.io.rs2.peekInt())
    //                 println("ans", ans)                    
    //                 if (dut.io.rs2.peekInt() == ans)
    //                     println("The answer is correct.")
    //                 else println("The answer is wrong.")
    //             }
    //             dut.clock.step(1)
    //         }      
    //     }
    // }
// }