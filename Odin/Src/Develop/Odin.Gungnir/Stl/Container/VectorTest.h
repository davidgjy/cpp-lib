#ifndef		_Stl_Container_Vector_Test_H_
#define		_Stl_Container_Vector_Test_H_

#include "../../TestBase.h"

class VectorTest : public TestBase
{
public:
	VectorTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
private:
	void simpleOperation();
};

#endif