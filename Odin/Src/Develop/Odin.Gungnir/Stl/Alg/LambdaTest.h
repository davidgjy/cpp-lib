#ifndef		Stl_Alg_Lambda_Test_H_
#define		Stl_Alg_Lambda_Test_H_

#include "../../TestBase.h"
#include "../../Domain/Models/Person.h"

class LambdaTest : public TestBase
{
public:
	LambdaTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
private:
	void simpleLambda();
	void sortByLambda();
};

#endif