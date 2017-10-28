#include <vector>
#include <set>
#include <list>
#include <deque>
#include <algorithm>
#include <functional>
#include <iostream>
#include "FuncObjectTest.h"
#include "../../Core/PrintInt.h"
#include "../../Core/print.hpp"
#include "../../Core/AddInt.h"

using namespace std;
using namespace std::placeholders;

void FuncObjectTest::printFuncObject()
{
	vector<int> coll;

	// insert elements from 1 to 9
	for (int i = 1; i <= 9; ++i) {
		coll.push_back(i);
	}

	// print all elements
	for_each(coll.cbegin(), coll.cend(),  // range
		PrintInt());                 // operation
	cout << endl;
}

void FuncObjectTest::addFuncObject()
{
	list<int> coll;

	// insert elements from 1 to 9
	for (int i = 1; i <= 9; ++i) {
		coll.push_back(i);
	}

	PRINT_ELEMENTS(coll, "initialized:                ");

	// add value 10 to each element
	for_each(coll.begin(), coll.end(),    // range
		AddInt(10));               // operation

	PRINT_ELEMENTS(coll, "after adding 10:            ");

	// add value of first element to each element
	for_each(coll.begin(), coll.end(),    // range
		AddInt(*coll.begin()));    // operation

	PRINT_ELEMENTS(coll, "after adding first element: ");
}

void FuncObjectTest::predefinedFuncObject()
{
	deque<int> coll = { 1, 2, 3, 5, 7, 11, 13, 17, 19 };

	PRINT_ELEMENTS(coll, "initialized: ");

	// negate all values in coll
	transform(coll.cbegin(), coll.cend(),      // source
		coll.begin(),                   // destination
		negate<int>());                 // operation
	PRINT_ELEMENTS(coll, "negated:     ");

	// square all values in coll
	transform(coll.cbegin(), coll.cend(),      // first source
		coll.cbegin(),                  // second source
		coll.begin(),                   // destination
		multiplies<int>());             // operation
	PRINT_ELEMENTS(coll, "squared:     ");
}

void FuncObjectTest::pdFuncObjectBind()
{
	set<int, greater<int>> coll1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	deque<int> coll2;

	// Note: due to the sorting criterion greater<>() elements have reverse order:
	PRINT_ELEMENTS(coll1, "initialized: ");

	// transform all elements into coll2 by multiplying them with 10
	transform(coll1.cbegin(), coll1.cend(),      // source
		back_inserter(coll2),             // destination
		bind(multiplies<int>(), _1, 10));   // operation
	PRINT_ELEMENTS(coll2, "transformed: ");

	// replace value equal to 70 with 42
	replace_if(coll2.begin(), coll2.end(),       // range
		bind(equal_to<int>(), _1, 70),     // replace criterion
		42);                             // new value
	PRINT_ELEMENTS(coll2, "replaced:    ");

	// remove all elements with values between 50 and 80
	coll2.erase(remove_if(coll2.begin(), coll2.end(),
		bind(logical_and<bool>(),
		bind(greater_equal<int>(), _1, 50),
		bind(less_equal<int>(), _1, 80))),
		coll2.end());
	PRINT_ELEMENTS(coll2, "removed:     ");
}

void FuncObjectTest::run()
{
	printStart("printFuncObject()");
	printFuncObject();
	printEnd("printFuncObject()");

	printStart("addFuncObject()");
	addFuncObject();
	printEnd("addFuncObject()");

	printStart("predefinedFuncObject()");
	predefinedFuncObject();
	printEnd("predefinedFuncObject()");

	printStart("pdFuncObjectBind()");
	pdFuncObjectBind();
	printEnd("pdFuncObjectBind()");
}

