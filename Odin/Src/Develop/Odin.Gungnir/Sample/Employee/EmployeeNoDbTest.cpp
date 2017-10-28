#include <iostream>
#include "Employee.h"
#include "EmployeeNoDbTest.h"

using namespace std;
using namespace Records;

void EmployeeNoDbTest::run()
{
	cout << "Testing the Employee class." << endl;

	Employee emp;
	emp.setFirstName("John");
	emp.setLastName("Doe");
	emp.setEmployeeNumber(71);
	emp.setSalary(50000);
	emp.promote();
	emp.promote(50);
	emp.hire();
	emp.display();

}
