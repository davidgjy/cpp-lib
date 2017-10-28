#ifndef		_Stl_Container_Multi_Set_Test_H_
#define		_Stl_Container_Multi_Set_Test_H_

#include "../../TestBase.h"

class MultiSetTest : public TestBase
{
public:
	MultiSetTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
private:
	void operationDemo();
};

#endif