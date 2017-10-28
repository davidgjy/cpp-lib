#ifndef		Stl_Alg_FuncParam_Test_H_
#define		Stl_Alg_FuncParam_Test_H_

#include "../../TestBase.h"

class FuncParamTest : public TestBase
{
public:
	FuncParamTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
private:
	void forEachFunc();
};

#endif