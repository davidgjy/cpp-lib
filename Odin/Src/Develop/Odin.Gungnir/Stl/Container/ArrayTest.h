#ifndef		_Stl_Container_Array_Test_H_
#define		_Stl_Container_Array_Test_H_

#include "../../TestBase.h"

class ArrayTest : public TestBase
{
public:
	ArrayTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
private:
	void simpleOperation();
};

#endif