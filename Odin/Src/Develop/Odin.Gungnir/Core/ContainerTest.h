#ifndef		Container_Test_H_
#define		Container_Test_H_

#include "../TestBase.h"

class ContainerTest : public TestBase
{
public:
	ContainerTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
};

#endif