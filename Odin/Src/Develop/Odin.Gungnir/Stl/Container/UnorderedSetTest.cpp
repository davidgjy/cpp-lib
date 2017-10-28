#include <unordered_set>
#include <numeric>
#include "../../Core/print.hpp"
#include "UnorderedSetTest.h"
#include "../../Core/hashval.hpp"
#include "../../Domain/Models/Customer.h"
#include "../../Domain/Models/CustomerHash.h"
#include "../../Domain/Models/CustomerEqual.h"
#include <string>
#include <iostream>

using namespace std;

void UnorderedSetTest::simpleOperation()
{
	// create and initialize unordered set
	unordered_set<int> coll = { 1, 2, 3, 5, 7, 11, 13, 17, 19, 77 };

	// print elements
	// - elements are in arbitrary order
	PRINT_ELEMENTS(coll);

	// insert some additional elements
	// - might cause rehashing and create different order
	coll.insert({ -7, 17, 33, -11, 17, 19, 1, 13 });
	PRINT_ELEMENTS(coll);

	// remove element with specific value
	coll.erase(33);

	// insert sum of all existing values
	coll.insert(accumulate(coll.begin(), coll.end(), 0));
	PRINT_ELEMENTS(coll);

	// check if value 19 is in the set
	if (coll.find(19) != coll.end()) 
	{
		cout << "19 is available" << endl;
	}

	// remove all negative values
	unordered_set<int>::iterator pos;
	for (pos = coll.begin(); pos != coll.end();) 
	{
		if (*pos < 0) {
			pos = coll.erase(pos);
		}
		else {
			++pos;
		}
	}

	PRINT_ELEMENTS(coll);
}

void UnorderedSetTest::simpleHashFunc()
{
	// unordered set with own hash function and equivalence criterion
	unordered_set<Customer, CustomerHash, CustomerEqual> custset;

	custset.insert(Customer("arne", "wink", 70));
	custset.insert(Customer("peter", "zhang", 70));
	PRINT_ELEMENTS(custset);
	
	Customer cust = Customer("arne", "wink", 70);
	if (custset.find(cust) != custset.end())
	{
		cout << "Customer: " << cust << " found!" << endl;
	}
	else
	{
		cout << "Customer: " << cust << " not exists!" << endl;
	}

	Customer cust2 = Customer("arne", "wink2", 70);
	if (custset.find(cust2) != custset.end())
	{
		cout << "Customer: " << cust2 << " found!" << endl;
	}
	else
	{
		cout << "Customer: " << cust2 << " not exists!" << endl;
	}
}

void UnorderedSetTest::run()
{
	printStart("simpleOperation()");
	simpleOperation();
	printEnd("simpleOperation()");

	printStart("simpleHashFunc()");
	simpleHashFunc();
	printEnd("simpleHashFunc()");
}