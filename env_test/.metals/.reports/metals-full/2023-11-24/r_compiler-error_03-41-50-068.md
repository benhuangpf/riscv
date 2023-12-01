file://<WORKSPACE>/src/test/scala/examples/FullAdderTest.scala
### java.lang.AssertionError: assertion failed: phase parser has already been used once; cannot be reused

occurred in the presentation compiler.

action parameters:
offset: 158
uri: file://<WORKSPACE>/src/test/scala/examples/FullAdderTest.scala
text:
```scala
package examples

// import org.scalatest._
import chisel3._
import chisel3.experimental.BundleLiterals._
import chiseltest._
// import org.scalatest.freespec@@.AnyFreeSpec
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

```



#### Error stacktrace:

```
scala.runtime.Scala3RunTime$.assertFailed(Scala3RunTime.scala:8)
	dotty.tools.dotc.core.Phases$Phase.init(Phases.scala:406)
	dotty.tools.dotc.core.Phases$Phase.init(Phases.scala:420)
	dotty.tools.dotc.core.Phases$PhasesBase.usePhases(Phases.scala:168)
	dotty.tools.dotc.core.Phases$PhasesBase.usePhases$(Phases.scala:37)
	dotty.tools.dotc.core.Contexts$ContextBase.usePhases(Contexts.scala:842)
	dotty.tools.dotc.Run.compileUnits$$anonfun$1(Run.scala:231)
	dotty.tools.dotc.Run.compileUnits$$anonfun$adapted$1(Run.scala:279)
	dotty.tools.dotc.util.Stats$.maybeMonitored(Stats.scala:67)
	dotty.tools.dotc.Run.compileUnits(Run.scala:279)
	dotty.tools.dotc.Run.compileSources(Run.scala:194)
	dotty.tools.dotc.interactive.InteractiveDriver.run(InteractiveDriver.scala:165)
	scala.meta.internal.pc.MetalsDriver.run(MetalsDriver.scala:45)
	scala.meta.internal.pc.HoverProvider$.hover(HoverProvider.scala:34)
	scala.meta.internal.pc.ScalaPresentationCompiler.hover$$anonfun$1(ScalaPresentationCompiler.scala:329)
```
#### Short summary: 

java.lang.AssertionError: assertion failed: phase parser has already been used once; cannot be reused