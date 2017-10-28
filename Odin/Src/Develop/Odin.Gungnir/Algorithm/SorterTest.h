#ifndef		_Algorithm_Sorter_Test_H_
#define		_Algorithm_Sorter_Test_H_

#include "../TestBase.h"

class SorterTest : public TestBase
{
public:
	SorterTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
private:
	void selectionSortTest();
};

#endif