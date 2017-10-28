#ifndef		Find_Char_Test_H_
#define		Find_Char_Test_H_

#include "../TestBase.h"

class FindCharTest : public TestBase
{
public:
	FindCharTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
};

#endif