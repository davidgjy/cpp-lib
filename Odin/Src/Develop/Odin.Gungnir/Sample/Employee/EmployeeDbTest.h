#pragma once

#include "../../TestBase.h"

class EmployeeDbTest : public TestBase
{
public:
	EmployeeDbTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
};