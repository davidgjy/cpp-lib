#include <iostream>
#include "SortUtil.h"
#include "InsertionSortTest.h"
#include "..\Core\VectorUtil.h"
#include "..\Core\ArrayUtil.h"

using namespace std;

void InsertionSortTest::run()
{
	
	vector<int> data1 { 9, 5, 18, 21, 32, 93, 2 };
	cout << "before sort:" << endl;
	VectorUtil<int>::display(data1);
	SortUtil<int>::insertionSort(data1);
	cout << "after sort:" << endl;
	VectorUtil<int>::display(data1);
	
	cout << "--------------------------------------------------------------------------------------------" << endl;

	int data2[] = { 5, 4, 1, 3, 2 };
	int arr_len = 5;
	cout << "before sort:" << endl;
	ArrayUtil<int>::display(data2, arr_len);
	SortUtil<int>::insertionSort(data2, 5);
	cout << "after sort:" << endl;
	ArrayUtil<int>::display(data2, arr_len);
}


