package rv32isc

import chisel3._
import config.Configs._
import scala.io.Source

class AnsIO extends Bundle{
    val read = Output(UInt(DATA_WIDTH.W))
}

class Ans extends Module{
    val io = IO(new AnsIO())

    var in = 0
    val source = Source.fromFile("memory/data/MemData_ans.txt")
    val read = WireDefault(0.U(32.W))
    for (line <- source.getLines()) {
        in = line.toInt
    }
    read := in.U
    io.read := read
}