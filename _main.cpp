#include <iostream>
#include "ClassInfo.h"
using namespace std;

bool _ClassInfo()
{
	ClassInfo cls("clsinfo");
	cls.addPubFunc("delBlankLine()","void");
	cls.addPubVar("className","string");
	cls.addPubVar("pubVar","string");
	cls.addPubFunc("print()","void");
	cls.addPriVar("pubVar","queue<string>");
	cls.addPriVar("priVar","queue<string>");
	cls.addPriFunc("PubVar()","void");
	cls.addPriFunc("auv()","void");
	
	cls.printInfo();
	return true;
}

int main()
{
	_ClassInfo();

	return 0;
}
