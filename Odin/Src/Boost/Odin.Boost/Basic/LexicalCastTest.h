#ifndef		Lexical_Cast_Test_H_
#define		Lexical_Cast_Test_H_

#include "../TestBase.h"

class LexicalCastTest : public TestBase
{
public:
	LexicalCastTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
};

#endif