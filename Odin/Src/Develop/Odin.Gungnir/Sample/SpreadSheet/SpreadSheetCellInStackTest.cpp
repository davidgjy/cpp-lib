#include <iostream>
#include "SpreadsheetCell.h"
#include "SpreadSheetCellInStackTest.h"

using namespace std;

void SpreadSheetCellInStackTest::run()
{
	SpreadsheetCell myCell, anotherCell;
	myCell.setValue(6);
	anotherCell.setString("3.2");

	cout << "cell 1: " << myCell.getValue() << endl;
	cout << "cell 2: " << anotherCell.getValue() << endl;
}