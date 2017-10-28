#pragma once

#include "../../TestBase.h"

class SpreadsheetTest : public TestBase
{
public:
	SpreadsheetTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
};

