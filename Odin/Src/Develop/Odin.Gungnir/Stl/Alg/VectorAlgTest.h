#ifndef		Vector_Alg_Test_H_
#define		Vector_Alg_Test_H_

#include "../../TestBase.h"

class VectorAlgTest : public TestBase
{
public:
	VectorAlgTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
};

#endif