#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <deque>
#include "CopyTest.h"
#include "../../Core/ContainerUtil.h"

using namespace std;

void CopyTest::normalCopy()
{
	list<int> coll1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	vector<int> coll2;

	cout << "** collection 1: **" << endl;
	ContainerUtil<list<int>>::printElements(coll1);

	// resize to have enough room
	coll2.resize(coll1.size());
	copy(coll1.cbegin(), coll1.cend(), coll2.begin());

	cout << "** collection 2(copy collection 1): **" << endl;
	ContainerUtil<vector<int>>::printElements(coll2);

	// intit with enough room
	deque<int> coll3(coll1.size());
	copy(coll1.cbegin(), coll1.cend(), coll3.begin());

	cout << "** collection 3(copy collection 1): **" << endl;
	ContainerUtil<deque<int>>::printElements(coll3);
}

void CopyTest::run()
{
	printStart("normalCopy()");
	normalCopy();
	printEnd("normalCopy()");
}

