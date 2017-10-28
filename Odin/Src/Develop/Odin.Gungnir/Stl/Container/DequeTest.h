#ifndef		_Stl_Container_Deque_Test_H_
#define		_Stl_Container_Deque_Test_H_

#include "../../TestBase.h"

class DequeTest : public TestBase
{
public:
	DequeTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
private:
	void simpleOperation();
};

#endif