#include <iostream>
#include <string>

#include "FileTraverser.h"

int main(int argc, char *argv[])
{
	// the first parameter is the file name
	if(argc>1)
		std::string strFile(argv[0]);
	else
	{
		std::cout<<"Please input the file path.";
		return -1;
	}

	// handle other parameters.
	for(int i=1; i<argc; ++i)
	{
		std::string strArg(argv[i]);
	}

	//define front quote '¡°'and back quote '"'
	static const char sc_cFrontQuote = '¡°';
	static const char sc_cBackQuote = '¡±';

	FileTraverser fileT(strFile);

	return 0;
}