#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <map>
#include <string>
#include "ContainerTest.h"
#include "ContainerUtil.h"

using namespace std;

void ContainerTest::run()
{
	/*
		1. vector test
	*/

	vector<int> coll;
	for (int i = 1; i <= 6; ++i)
	{
		coll.push_back(i);
	}
	cout << "** print elements of vector **" << endl;
	ContainerUtil<vector<int>>::printElements(coll);

	/*
		2. deque test
	*/

	deque<int> coll2;
	for (int i = 1; i <= 6; ++i)
	{
		coll2.push_front(i);
	}
	cout << "** print elements of deque **" << endl;
	ContainerUtil<deque<int>>::printElements(coll2);

	/*
		3. list test
	*/

	list<char> coll3;
	for (char c = 'a'; c <= 'z';++c)
	{
		coll3.push_back(c);
	}
	cout << "** print elements of list **" << endl;
	ContainerUtil<list<char>>::printElements(coll3);
	cout << "print again:" << endl;
	while (!coll3.empty())
	{
		cout << coll3.front() << ' ';
		coll3.pop_front();
	}
	cout << endl;

	/*
		4. forward list
	*/

	// create forward-list container for some prime numbers
	forward_list<long> coll4 = { 2, 3, 5, 7, 11, 13, 17 };
	// resize two times
	// - note: poor performance
	coll4.resize(9);
	coll4.resize(10, 99);
	cout << "** print elements of forward list **" << endl;
	ContainerUtil<forward_list<long>>::printElements(coll4);

	/*
		5. set & multiset
	*/

	set<string> cities{
		"Braunschweig", "Hanover", "Frankfurt", "New York",
		"Chicago", "Toronto", "Paris", "Frankfurt"
	};
	multiset<string> dup_cities {
		"Braunschweig", "Hanover", "Frankfurt", "New York",
		"Chicago", "Toronto", "Paris", "Frankfurt"
	};
	cout << "cities before:" << endl;
	ContainerUtil<set<string>>::printElements(cities);
	ContainerUtil<multiset<string>>::printElements(dup_cities);

	cities.insert({ "London", "Munich", "Hanover", "Braunschweig" });
	dup_cities.insert({ "London", "Munich", "Hanover", "Braunschweig" });
	cout << "cities after:" << endl;
	ContainerUtil<set<string>>::printElements(cities);
	ContainerUtil<multiset<string>>::printElements(dup_cities);

	/*
		6. map & multimap
	*/

	multimap<int, string> coll5 = { 
		{ 5, "tagged" },
		{ 2, "a" },
		{ 1, "this" },
		{ 4, "of" },
		{ 6, "strings" },
		{ 1, "is" },
		{ 3, "multimap" } 
	};
	
	// print all element values
	// - element member second is the value
	for (auto elem : coll5) {
		cout << elem.second << ' ';
	}
	cout << endl;
}
