package utils

import chisel3._
import config.Configs._
import scala.io.Source

class Ans{
    var read = 0
    val source = Source.fromFile("memory/data/MemData_ans.txt")
    for (line <- source.getLines()) {
        read = line.toInt
    }
}