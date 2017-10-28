#ifndef		Int_List_Test_H_
#define		Int_List_Test_H_

#include "../TestBase.h"

class IntListTest : public TestBase
{
public:
	IntListTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
};

#endif