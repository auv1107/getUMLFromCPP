getUMLFromCPP
=============

###getUMLFromCPP
	- FileName : string
	- content : string
	- classQueue : queue<classUML *>
	---------------------------------
	- delSlashN() : void
	- searchKey(string) : int
	- searchPunc(char) : int
	- matchBracket(char) : int
	+ readTestFromFile(): bool
	+ drawUML() : int
	+ printUML() : void

---

###classUML
	- pubVar : queue<string>
	- pubFunc : queue<string>
	- priVar : queue<string>
    - priFunc : queue<string>
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
