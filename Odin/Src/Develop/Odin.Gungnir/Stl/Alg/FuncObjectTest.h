#ifndef		Stl_Alg_Func_Object_Test_H_
#define		Stl_Alg_Func_Object_Test_H_

#include "../../TestBase.h"

class FuncObjectTest : public TestBase
{
public:
	FuncObjectTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
private:
	void printFuncObject();
	void addFuncObject();
	void predefinedFuncObject();
	void pdFuncObjectBind();
};

#endif