#ifndef		_Stl_Container_ForwardList_Test_H_
#define		_Stl_Container_ForwardList_Test_H_

#include <list>
#include <forward_list>
#include "../../TestBase.h"

class ForwardListTest : public TestBase
{
public:
	ForwardListTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
	void printLists(const string& s, const forward_list<int>& l1, const forward_list<int>& l2);
private:
	void findDemo();
	void findBeforeDemo();
	void fullDemo();
};

#endif