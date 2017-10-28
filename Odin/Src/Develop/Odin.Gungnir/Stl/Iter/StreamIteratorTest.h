#ifndef		Stl_Iter_Stream_Test_H_
#define		Stl_Iter_Stream_Test_H_

#include "../../TestBase.h"

class StreamIteratorTest : public TestBase
{
public:
	StreamIteratorTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
};

#endif