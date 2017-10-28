#ifndef		_Fundamental_IO_FileStream_Test_H_
#define		_Fundamental_IO_FileStream_Test_H_

#include "../../TestBase.h"

class FileStreamTest : public TestBase
{
public:
	FileStreamTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
private:
	void simpleInputOutput();
	void streamIOTest();
};

#endif