#ifndef		Stl_Iter_Insert_Test_H_
#define		Stl_Iter_Insert_Test_H_

#include "../../TestBase.h"

class InsertIteratorTest : public TestBase
{
public:
	InsertIteratorTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
};

#endif