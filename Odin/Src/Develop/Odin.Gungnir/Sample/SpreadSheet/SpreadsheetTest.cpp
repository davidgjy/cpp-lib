#include <iostream>
#include "Spreadsheet.h"
#include "SpreadsheetCell.h"
#include "SpreadsheetTest.h"

using namespace std;

void SpreadsheetTest::run()
{
	Spreadsheet s1(2, 2), s2(4, 3);
	s1 = s2;

	SpreadsheetCell cell;

	cell.setValue(1.8);
	s1.setCellAt(2, 1, cell);
	cell.setValue(2.0);
	s2.setCellAt(1, 2, cell);

	s1.printCells();
	cout << "--------------------------------------" << endl;
	s2.printCells();
}