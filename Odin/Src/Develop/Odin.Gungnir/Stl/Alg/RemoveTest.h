#ifndef		Stl_Alg_Remove_Test_H_
#define		Stl_Alg_Remove_Test_H_

#include "../../TestBase.h"

class RemoveTest : public TestBase
{
public:
	RemoveTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
private:
	void removeElements();
};

#endif