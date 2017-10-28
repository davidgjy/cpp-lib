#include <algorithm>
#include "Person.h"

inline string Person::firstname() const 
{
	return fn;
}

inline string Person::lastname() const 
{
	return ln;
}

inline int Person::getAge() const
{
	return age;
}

void Person::setAge(int a)
{
	age = a;
}

/* binary function predicate:
* - returns whether a person is less than another person
*/
bool Person::sortByName(const Person& p1, const Person& p2)
{
	/* a person is less than another person
	* - if the last name is less
	* - if the last name is equal and the first name is less
	*/
	return p1.lastname()<p2.lastname() ||
		(p1.lastname() == p2.lastname() &&
		p1.firstname()<p2.firstname());
}


// another binary predicate
bool Person::sortByAge(const Person& p1, const Person& p2)
{
	return p1.getAge() < p2.getAge();
}

void Person::sortDequeByName(deque<Person> &persons)
{
	// sort elements
	sort(persons.begin(), persons.end(),    // range
		Person::sortByName);       // sort criterion
}

void Person::sortDequeByAge(deque<Person> &persons)
{
	// sort elements
	sort(persons.begin(), persons.end(),    // range
		Person::sortByAge);       // sort criterion
}

ostream& operator<< (ostream& s, const Person& p)
{
	s << "[" << p.lastname() << ", " << p.firstname() << ", " << p.getAge() << "]";
	return s;
}

void Person::printPersonDeques(deque<Person> persons)
{
	deque<Person>::iterator pos;
	for (pos = persons.begin(); pos != persons.end(); ++pos)
	{
		cout << *pos << endl;
	}
}