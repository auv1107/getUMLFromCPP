#ifndef CLASS_CLASSINFO
#define CLASS_CLASSINFO

#include <iostream>
#include <queue>
#include <string>
using std::queue;
using std::string;

class ClassInfo
{
private:
	queue<string> pubVar;
	queue<string> pubFunc;
	queue<string> priVar;
	queue<string> priFunc;
public:
	string className;

public:
	ClassInfo(string clsName=NULL)
	{
		className = clsName;
	}
	
	void printInfo();
	void PubVar();
	void PubFunc();
	void PriVar();
	void PriFunc();
	void printQueue(char prefix, queue<string> &Que);

	void addPubVar(string var, string type);
	void addPubFunc(string var, string type);
	void addPriVar(string func, string type);
	void addPriFunc(string func, string type);
};

// ACHIEVE

void ClassInfo::printInfo()
{
	std::cout << className << std::endl;
	std::cout << "---" << std::endl;

	PubVar();
	PriVar();
	std::cout << "---" << std::endl;
	PubFunc();
	PriFunc();
}

void ClassInfo::PubVar()
{	
	printQueue('+',pubVar);
}

void ClassInfo::PriVar()
{
	printQueue('-',priVar);
}

void ClassInfo::PubFunc()
{
	printQueue('+',pubFunc);
}

void ClassInfo::PriFunc()
{
	printQueue('-',priFunc);
}

void ClassInfo::printQueue(char prefix, queue<string> &Que)
{
	while(!Que.empty())
	{	
		std::cout << prefix << ' ' 
			<< Que.front() << " : " ;
		Que.pop();
		std::cout << Que.front() << std::endl;
		Que.pop();
	}
}

void ClassInfo::addPubVar(string var, string type)
{
	pubVar.push(var);
	pubVar.push(type);
}

void ClassInfo::addPriVar(string var, string type)
{
	priVar.push(var);
	priVar.push(type);
}

void ClassInfo::addPubFunc(string func, string type)
{
	pubFunc.push(func);
	pubFunc.push(type);
}

void ClassInfo::addPriFunc(string func, string type)
{
	priFunc.push(func);
	priFunc.push(type);
}

#endif
