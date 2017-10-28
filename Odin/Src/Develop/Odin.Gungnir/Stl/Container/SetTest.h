#ifndef		_Stl_Container_Set_Test_H_
#define		_Stl_Container_Set_Test_H_

#include "../../TestBase.h"

class SetTest : public TestBase
{
public:
	SetTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
private:
	void operationDemo();
	void runtimeCompare();
};

#endif