#ifndef		Insertion_Sort_Test_H_
#define		Insertion_Sort_Test_H_

#include "../TestBase.h"

class InsertionSortTest : public TestBase
{
public:
	InsertionSortTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
};

#endif