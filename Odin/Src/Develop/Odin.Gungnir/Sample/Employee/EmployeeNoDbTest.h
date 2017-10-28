#pragma once

#include "../../TestBase.h"

class EmployeeNoDbTest : public TestBase
{
public:
	EmployeeNoDbTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
};