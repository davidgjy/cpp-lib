#ifndef		_Fundamental_IO_StringStream_Test_H_
#define		_Fundamental_IO_StringStream_Test_H_

#include "../../TestBase.h"

class StringStreamTest : public TestBase
{
public:
	StringStreamTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
private:
	void inputConnect();
};

#endif