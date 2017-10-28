#ifndef		Stl_Alg_Predicate_Test_H_
#define		Stl_Alg_Predicate_Test_H_

#include "../../TestBase.h"
#include "../../Domain/Models/Person.h"

class PredicateTest : public TestBase
{
public:
	PredicateTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
	
private:
	void unaryPredicate();
	void binaryPredicate();
};

#endif