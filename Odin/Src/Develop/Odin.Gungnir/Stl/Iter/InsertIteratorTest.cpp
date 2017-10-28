#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>
#include <vector>
#include <deque>
#include <set>
#include "InsertIteratorTest.h"
#include "../../Core/ContainerUtil.h"

using namespace std;

void InsertIteratorTest::run()
{
	list<int> coll1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	cout << "** collection 1: **" << endl;
	ContainerUtil<list<int>>::printElements(coll1);

	vector<int> coll2;
	copy(coll1.cbegin(), coll1.cend(), back_inserter(coll2));

	cout << "** collection 2(copy back insert from collection 1): **" << endl;
	ContainerUtil<vector<int>>::printElements(coll2);

	deque<int> coll3;
	copy(coll1.cbegin(), coll1.cend(), front_inserter(coll3));

	cout << "** collection 3(copy front insert from collection 1): **" << endl;
	ContainerUtil<deque<int>>::printElements(coll3);

	set<int> coll4;
	copy(coll1.cbegin(), coll1.cend(), inserter(coll4, coll4.begin()));

	cout << "** collection 4(copy general insert from collection 1): **" << endl;
	ContainerUtil<set<int>>::printElements(coll4);
}

