#include <algorithm>
#include <deque>
#include <iostream>
#include "LambdaTest.h"
#include "../../Core/ContainerUtil.h"

using namespace std;

void LambdaTest::simpleLambda()
{
	deque<int> coll = { 1, 3, 19, 5, 13, 7, 11, 2, 17 };

	cout << "all elements:" << endl;
	ContainerUtil<deque<int>>::printElements(coll);

	int x, y;
	cout << "Input x: ";
	cin >> x;
	cout << endl;
	cout << "Input y: ";
	cin >> y;
	cout << endl;
	auto pos = find_if(coll.cbegin(), coll.cend(),  // range
		[=](int i) {                 // search criterion
		return i > x && i < y;
	});

	cout << "first elem >"<< x <<" and <"<< y <<": " << *pos << endl;
}

void LambdaTest::sortByLambda()
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

	cout << "persons before sort:" << endl;
	Person::printPersonDeques(coll);

	// sort Persons according to lastname (and firstname)
	sort(coll.begin(), coll.end(),                // range
		[](const Person& p1, const Person& p2) { // sort criterion
		return p1.lastname()<p2.lastname() ||
			(p1.lastname() == p2.lastname() &&
			p1.firstname()<p2.firstname());
	});

	cout << "persons after sort by name:" << endl;
	Person::printPersonDeques(coll);

	// sort Persons according to age
	sort(coll.begin(), coll.end(),                // range
		[](const Person& p1, const Person& p2) { // sort criterion
		return p1.getAge() < p2.getAge();
	});

	cout << "persons after sort by age:" << endl;
	Person::printPersonDeques(coll);
}

void LambdaTest::run()
{
	printStart("simpleLambda()");
	simpleLambda();
	printEnd("simpleLambda()");

	printStart("sortByLambda()");
	sortByLambda();
	printEnd("sortByLambda()");
}