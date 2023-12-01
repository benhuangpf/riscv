file://<WORKSPACE>/src/test/scala/examples/AluTest.scala
### java.lang.NullPointerException

occurred in the presentation compiler.

action parameters:
offset: 0
uri: file://<WORKSPACE>/src/test/scala/examples/AluTest.scala
text:
```scala
@@
```



#### Error stacktrace:

```
java.base/java.util.Arrays.sort(Arrays.java:1441)
	scala.tools.nsc.classpath.JFileDirectoryLookup.listChildren(DirectoryClassPath.scala:118)
	scala.tools.nsc.classpath.JFileDirectoryLookup.listChildren$(DirectoryClassPath.scala:102)
	scala.tools.nsc.classpath.DirectoryClassPath.listChildren(DirectoryClassPath.scala:293)
	scala.tools.nsc.classpath.DirectoryClassPath.listChildren(DirectoryClassPath.scala:293)
	scala.tools.nsc.classpath.DirectoryLookup.list(DirectoryClassPath.scala:83)
	scala.tools.nsc.classpath.DirectoryLookup.list$(DirectoryClassPath.scala:78)
	scala.tools.nsc.classpath.DirectoryClassPath.list(DirectoryClassPath.scala:293)
	scala.tools.nsc.classpath.AggregateClassPath.$anonfun$list$3(AggregateClassPath.scala:106)
	scala.collection.immutable.Vector.foreach(Vector.scala:1856)
	scala.tools.nsc.classpath.AggregateClassPath.list(AggregateClassPath.scala:102)
	scala.tools.nsc.util.ClassPath.list(ClassPath.scala:35)
	scala.tools.nsc.util.ClassPath.list$(ClassPath.scala:35)
	scala.tools.nsc.classpath.AggregateClassPath.list(AggregateClassPath.scala:31)
	scala.tools.nsc.symtab.SymbolLoaders$PackageLoader.doComplete(SymbolLoaders.scala:297)
	scala.tools.nsc.symtab.SymbolLoaders$SymbolLoader.$anonfun$complete$2(SymbolLoaders.scala:249)
	scala.tools.nsc.symtab.SymbolLoaders$SymbolLoader.complete(SymbolLoaders.scala:247)
	scala.reflect.internal.Symbols$Symbol.completeInfo(Symbols.scala:1561)
	scala.reflect.internal.Symbols$Symbol.info(Symbols.scala:1533)
	scala.reflect.internal.Types$TypeRef.decls(Types.scala:2606)
	scala.tools.nsc.typechecker.Namers$Namer.enterPackage(Namers.scala:763)
	scala.tools.nsc.typechecker.Namers$Namer.dispatch$1(Namers.scala:296)
	scala.tools.nsc.typechecker.Namers$Namer.standardEnterSym(Namers.scala:309)
	scala.tools.nsc.typechecker.AnalyzerPlugins.pluginsEnterSym(AnalyzerPlugins.scala:495)
	scala.tools.nsc.typechecker.AnalyzerPlugins.pluginsEnterSym$(AnalyzerPlugins.scala:494)
	scala.meta.internal.pc.MetalsGlobal$MetalsInteractiveAnalyzer.pluginsEnterSym(MetalsGlobal.scala:67)
	scala.tools.nsc.typechecker.Namers$Namer.enterSym(Namers.scala:287)
	scala.tools.nsc.typechecker.Analyzer$namerFactory$$anon$1.apply(Analyzer.scala:48)
	scala.tools.nsc.Global$GlobalPhase.applyPhase(Global.scala:459)
	scala.tools.nsc.Global$Run.$anonfun$compileLate$2(Global.scala:1663)
	scala.tools.nsc.Global$Run.$anonfun$compileLate$2$adapted(Global.scala:1662)
	scala.collection.IterableOnceOps.foreach(IterableOnce.scala:563)
	scala.collection.IterableOnceOps.foreach$(IterableOnce.scala:561)
	scala.collection.AbstractIterator.foreach(Iterator.scala:1293)
	scala.tools.nsc.Global$Run.compileLate(Global.scala:1662)
	scala.tools.nsc.interactive.Global.parseAndEnter(Global.scala:668)
	scala.tools.nsc.interactive.Global.typeCheck(Global.scala:678)
	scala.meta.internal.pc.PcCollector.<init>(PcCollector.scala:29)
	scala.meta.internal.pc.PcDocumentHighlightProvider.<init>(PcDocumentHighlightProvider.scala:11)
	scala.meta.internal.pc.ScalaPresentationCompiler.$anonfun$documentHighlight$1(ScalaPresentationCompiler.scala:340)
```
#### Short summary: 

java.lang.NullPointerException