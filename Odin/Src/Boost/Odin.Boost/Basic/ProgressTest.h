#ifndef		Progress_Test_H_
#define		Progress_Test_H_

#include "../TestBase.h"

class ProgressTest : public TestBase
{
public:
	ProgressTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
private:
	void case1();
	void case2();
};

#endif