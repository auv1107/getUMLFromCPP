getUMLFromCPP
=============

###getUMLFromCPP
<pre>
- FileName : string
- content : string
- classQueue : queue\<classUML *\>
---------------------------------
+ readTestFromFile(): bool
+ delSlashN() : void
+ searchKey(string) : int
+ searchPunc(char) : int
+ matchBracket(char) : int
+ drawUML() : int
+ printUML() : void
</pre>

---

###classUML
<pre>
- pubVar : queue\<string\>
- pubFunc : queue\<string\>
- priVar : queue\<string\>
- priFunc : queue\<string\>
- className : string
----------------------------
+ printUML() : void
+ pubVar() : void
+ priVar() : void
+ pubFunc() : void
+ priFunc() : void

+ addPubVar() : void
+ addPriVar() : void
+ addPubFunc() : void
+ addPriFunc() : void
</pre>
