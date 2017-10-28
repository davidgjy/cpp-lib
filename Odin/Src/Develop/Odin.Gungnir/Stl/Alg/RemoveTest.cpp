#include <iostream>
#include <algorithm>
#include <list>
#include <set>
#include <iterator>
#include "RemoveTest.h"
#include "../../Core/ContainerUtil.h"

using namespace std;

void RemoveTest::removeElements()
{
	list<int> coll1;

	for (int i = 1; i <= 6; ++i)
	{
		coll1.push_front(i);
		coll1.push_back(i);
	}

	cout << "** collection 1: **" << endl;
	ContainerUtil<list<int>>::printElements(coll1);

	// remove all elements with value 3
	list<int>::iterator end = remove(coll1.begin(), coll1.end(), 3);

	cout << "** collection 1(after remove elements 3): **" << endl;
	ContainerUtil<list<int>>::printElements(coll1);

	// print number of removed elements
	cout << "number of removed elements : " << distance(end, coll1.end()) << endl;

	// release 'removed' elements
	coll1.erase(end, coll1.end());
	cout << "** collection 1(after releasing removed elements): **" << endl;
	ContainerUtil<list<int>>::printElements(coll1);

	// remove & release elements with value 4 all at once(poor performance)
	coll1.erase(remove(coll1.begin(), coll1.end(), 4), coll1.end());
	cout << "** collection 1(after remove & release elements 4): **" << endl;
	ContainerUtil<list<int>>::printElements(coll1);

	// remove all elements with value 5(good performance)
	coll1.remove(5);
	cout << "** collection 1(after remove elements 5): **" << endl;
	ContainerUtil<list<int>>::printElements(coll1);

	set<int> coll2 = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	cout << "** collection 2: **" << endl;
	ContainerUtil<set<int>>::printElements(coll2);

	// remove all elements with value 3
	int num = coll2.erase(3);
	cout << "number of removed elemens : " << num << endl;
	cout << "** collection 2(after remove elements 3): **" << endl;
	ContainerUtil<set<int>>::printElements(coll2);
}

void RemoveTest::run()
{
	printStart("removeElements()");
	removeElements();
	printStart("removeElements()");
}

