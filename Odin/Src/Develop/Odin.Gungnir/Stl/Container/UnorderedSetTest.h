#ifndef		_Stl_Container_UnorderedSet_Test_H_
#define		_Stl_Container_UnorderedSet_Test_H_

#include "../../TestBase.h"

class UnorderedSetTest : public TestBase
{
public:
	UnorderedSetTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
private:
	void simpleOperation();
	// provide your own hash function for equal criteria
	void simpleHashFunc();
};

#endif