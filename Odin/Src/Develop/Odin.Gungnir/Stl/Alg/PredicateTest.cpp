#include <list>
#include <deque>
#include <algorithm>
#include <iostream>
#include "../../Algorithm/MathUtil.h"
#include "../../Domain/Models/Person.h"
#include "../../Core/ContainerUtil.h"
#include "PredicateTest.h"

using namespace std;

void PredicateTest::unaryPredicate()
{
	list<int> coll;
	int startNumber, endNumber;

	cout << "-- Find first prime number between the range --" << endl;
	cout << "Input Start Number: " << endl;
	cin >> startNumber;
	cout << "Input End Number: " << endl;
	cin >> endNumber;

	// insert elements from start number to end number
	for (int i = startNumber; i <= endNumber; ++i) {
		coll.push_back(i);
	}

	// search for prime number
	auto pos = find_if(coll.cbegin(), coll.cend(),  // range
		MathUtil::isPrime);                    // predicate
	if (pos != coll.end()) {
		// found
		cout << *pos << " is first prime number found" << endl;
	}
	else {
		// not found
		cout << "no prime number found" << endl;
	}
}

void PredicateTest::binaryPredicate()
{
	// create some persons
	Person p1("nicolai", "josuttis");
	Person p2("ulli", "josuttis");
	Person p3("anica", "josuttis");
	Person p4("lucas", "josuttis");
	Person p5("lucas", "otto");
	Person p6("lucas", "arm");
	Person p7("anica", "holle");
	p1.setAge(20);
	p2.setAge(30);
	p3.setAge(18);
	p4.setAge(2);
	p5.setAge(22);
	p6.setAge(35);
	p7.setAge(95);

	// insert person into collection coll
	deque<Person> coll;
	coll.push_back(p1);
	coll.push_back(p2);
	coll.push_back(p3);
	coll.push_back(p4);
	coll.push_back(p5);
	coll.push_back(p6);
	coll.push_back(p7);

	// print elements
	cout << "deque before sort():" << endl;
	Person::printPersonDeques(coll);

	cout << "-- Sort By Name --" << endl;
	Person::sortDequeByName(coll);

	// print elements
	cout << "deque after sort():" << endl;
	Person::printPersonDeques(coll);

	cout << "-- Sort By Age --" << endl;
	Person::sortDequeByAge(coll);

	// print elements
	cout << "deque after sort():" << endl;
	Person::printPersonDeques(coll);
}

void PredicateTest::run()
{
	printStart("unaryPredicate()");
	unaryPredicate();
	printEnd("unaryPredicate()");

	printStart("binaryPredicate()");
	binaryPredicate();
	printEnd("binaryPredicate()");
}