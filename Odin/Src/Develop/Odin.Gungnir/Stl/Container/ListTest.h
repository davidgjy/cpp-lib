#ifndef		_Stl_Container_List_Test_H_
#define		_Stl_Container_List_Test_H_

#include <list>
#include "../../TestBase.h"

class ListTest : public TestBase
{
public:
	ListTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
private:
	void printLists(const list<int>& l1, const list<int>& l2);
	void simpleOperation();
};

#endif