#include <forward_list>
#include "../../Core/print.hpp"
#include "../../Core/findbefore.hpp"
#include "ForwardListTest.h"

using namespace std;

void ForwardListTest::printLists(const string& s, const forward_list<int>& l1,
	const forward_list<int>& l2)
{
	cout << s << endl;
	cout << " list1: ";
	copy(l1.cbegin(), l1.cend(), ostream_iterator<int>(cout, " "));
	cout << endl << " list2: ";
	copy(l2.cbegin(), l2.cend(), ostream_iterator<int>(cout, " "));
	cout << endl;
}

void ForwardListTest::findDemo()
{
	forward_list<int> list = { 1, 2, 3, 4, 5, 97, 98, 99 };

	// find the position before the first even element
	auto posBefore = list.before_begin();
	for (auto pos = list.begin(); pos != list.end(); ++pos, ++posBefore) 
	{
		if (*pos % 2 == 0) 
		{
			break;  // element found
		}
	}

	// and insert a new element in front of the first even element
	list.insert_after(posBefore, 42);
	PRINT_ELEMENTS(list);
}

void ForwardListTest::findBeforeDemo()
{
	forward_list<int> list = { 1, 2, 3, 4, 5, 97, 98, 99 };

	// find the position before the first even element
	auto posBefore = find_before_if(list.before_begin(), list.end(), 
		[](int i) {
			return i % 2 == 0;
		});

	// and insert a new element in front of the first even element
	list.insert_after(posBefore, 42);
	PRINT_ELEMENTS(list);
}

void ForwardListTest::fullDemo()
{
	// create two forward lists
	forward_list<int> list1 = { 1, 2, 3, 4 };
	forward_list<int> list2 = { 77, 88, 99 };
	printLists("initial:", list1, list2);

	// insert six new element at the beginning of list2
	list2.insert_after(list2.before_begin(), 99);
	list2.push_front(10);
	list2.insert_after(list2.before_begin(), { 10, 11, 12, 13 });
	printLists("6 new elems:", list1, list2);

	// insert all elements of list2 at the beginning of list1
	list1.insert_after(list1.before_begin(),
		list2.begin(), list2.end());
	printLists("list2 into list1:", list1, list2);

	// delete second element and elements after element with value 99
	list2.erase_after(list2.begin());
	list2.erase_after(find(list2.begin(), list2.end(),
		99),
		list2.end());
	printLists("delete 2nd and after 99:", list1, list2);

	// sort list1, assign it to list2, and remove duplicates
	list1.sort();
	list2 = list1;
	list2.unique();
	printLists("sorted and unique:", list1, list2);

	// merge both sorted lists into list1
	list1.merge(list2);
	printLists("merged:", list1, list2);
}

void ForwardListTest::run()
{
	printStart("findDemo()");
	findDemo();
	printEnd("findDemo()");

	printStart("findBeforeDemo()");
	findBeforeDemo();
	printEnd("findBeforeDemo()");

	printStart("fullDemo()");
	fullDemo();
	printEnd("fullDemo()");
}