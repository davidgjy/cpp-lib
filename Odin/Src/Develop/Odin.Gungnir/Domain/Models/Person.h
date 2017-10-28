#ifndef _Domain_Models_Person_H_
#define _Domain_Models_Person_H_

#include <iostream>
#include <string>
#include <deque>

using namespace std;

class Person 
{
	friend ostream& operator<< (ostream& s, const Person& p);
private:
	string fn;    // first name
	string ln;    // last name
	int age;
public:
	Person() { }
	Person(const string& f, const string& n)
		: fn(f), ln(n) 
	{
	}
	string firstname() const;
	string lastname() const;
	int getAge() const;
	void setAge(int a);
	static bool sortByName(const Person& p1, const Person& p2);
	static bool sortByAge(const Person& p1, const Person& p2);
	static void sortDequeByName(deque<Person> &persons);
	static void sortDequeByAge(deque<Person> &persons);
	static void printPersonDeques(deque<Person> persons);
};

#endif