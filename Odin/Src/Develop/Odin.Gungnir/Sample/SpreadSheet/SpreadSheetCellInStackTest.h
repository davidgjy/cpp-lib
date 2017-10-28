#pragma once

#include "../../TestBase.h"

class SpreadSheetCellInStackTest : public TestBase
{
public:
	SpreadSheetCellInStackTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
};

