#ifndef		Stl_Alg_Copy_Test_H_
#define		Stl_Alg_Copy_Test_H_

#include "../../TestBase.h"

class CopyTest : public TestBase
{
public:
	CopyTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
private:
	void normalCopy();
};

#endif