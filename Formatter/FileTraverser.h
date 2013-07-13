#ifndef _FILETRAVERSER_H_
#define _FILETRAVERSER_H_


class FileTraverser
{
private:
	std::string m_strFile;

	/// Private copy constructor and assignment operator
	FileTraverser(const class FileTraverser&);   
	class FileTraverser& operator=(const class FileTraverser&);

public:
	FileTraverser(const std::string& argFile);
	~FileTraverser();

	void doFormat();
};

#endif //_FILETRAVERSER_H_