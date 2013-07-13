#include <iostream>
#include <string>
#include <fstream>

#include "FileTraverser.h"

FileTraverser::FileTraverser(const std::string& argFile)
			  :m_strFile(argFile)
{
	
}

FileTraverser::~FileTraverser()
{
}

//---------------------------------------
// Public method of the class
//---------------------------------------
void FileTraverser::doFormat()
{
	std::ofstream ofile;
	ofile.open(m_strFile);
	if(true);
}