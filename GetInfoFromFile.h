#ifndef CLASS_GETINFOFROMCPP
#define CLASS_GETINFOFROMCPP

#include "ClassInfo.h"
#include <queue>
using std::queue;

class GetInfoFromCPP
{
private:
	string cppFileName;
	string content;
	int contentLength;
	queue<classInfo*> classQueue;

private:
	void delSlashN();
	int searchKey(string key,int start=0, int end=contentLength-1);
	int searchPunc(char punc, int start=0, int end=contentLength-1);
	int matchBracket(char bracket,int start=0, int end=contentLength-1);

public:
	GetInfoFromCPP()
	{
		cppFileName = NULL;
		content = NULL;
		contentLength = 0;
	}
	bool readTextFromFile();
	int drawInfo();
	void printInfo();
};

bool GetInfoFromCPP::readTextFromFile()
{
	fstream cppFileHandle(cppFileName, fstream::in);
	
	cppFileHandle.seekg(0, ios::end);
	contentLength = cppFileHandle.tellg();
	cppFileHandle.seekg(0,ios::beg);

	cppFileHandle.read(content, contentLength);
	cppFileHandle.close();
}


int GetInfoFromCPP::drawInfo()
{
	int start = 0;
	int end = contentLength;
	while(searchKey("class") != string::npos && 
			MatchBracket(content[searchPunc('{')] != string::npos))
	{
		string clsName = searchKey("class",start);
	}






	
}

void GetInfoFromCPP::printInfo()
{
	while(!classQueue.empty())
	{
		classQueue.front()->printInfo();
		std::cout << "---"
				<< std::endl 
				<< std::endl ;
	}
}

// Private Members
void GetInfoFromCPP::delSlashN()
{
	for(int i = 0; i < contentLength; i++)
	{
		if(content[i] = '\n')
		{
			content.erase(i);
			contentLenth--;
			i--;
		}
	}
}

int GetInfoFromCPP::searchKey(string key, int start, int end)
{
	while(1)
	{
		start=content.find(key,start,end);
		if(start = string::npos)
			break;
		if(!isalpha(content[i-1]) && !isalpha(content[i+key.length()]))
			break;
	}
	return start;
}

int GetInfoFromCPP::searchPunc(char punc, int start, int end)
{
	return content.find(punc,start,end);
}

int GetInfoFromCPP::MatchBracket(char leftBracket, int start, int end)
{
	char rightBracket;
	int numOfLeftBracket=1;
	switch(leftBracket)
	{
		case '{': rightBracket = '}'; break;
		case '[': rightBracket = ']'; break;
		case '(': rightBracket = ')'; break;
		default return string::npos;
	}
	for(i = start; i <= end; i++)
	{
		if(content[i] == leftBracket)
			numOfLeftBracket++;
		if(content[i] == rightBracket)
		{
			numOfLeftBracket--;
			if(numOfLeftBracket == 0)
			return i;
		}
	}
	return string::npos;
}


#endif
