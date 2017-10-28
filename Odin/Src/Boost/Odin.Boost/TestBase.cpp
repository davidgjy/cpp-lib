#include <iostream>
#include "TestBase.h"

TestBase::TestBase()
{
	cout << "Test Base Called ... " << endl;
	cmd = "";
	description = "";
}

TestBase::TestBase(const string &c, const string &d)
{
	cmd = c;
	description = d;
	cout << "******************************** Test Start ********************************" << endl;
	cout << "** Cmd: " << cmd << ", Description: " << description << endl;
}

TestBase::~TestBase()
{
	cout << "******************************** Test End **********************************" << endl;
	cout << endl;
}