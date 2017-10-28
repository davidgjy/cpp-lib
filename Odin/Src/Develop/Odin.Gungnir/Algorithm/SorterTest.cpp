#include <vector>
#include <iostream>
#include "SorterTest.h"
#include "Sorter.hpp"

using namespace std;

void SorterTest::selectionSortTest()
{
	int *a = new int[10];
	for (int i = 0; i < 10; i++)
		a[i] = 1000 * (1.0*rand() / RAND_MAX);

	cout << "before sorting..." << endl;
	Sorter<int>::show(a, 10);

	Sorter<int>::selectionSort(a, 0, 9);

	cout << "after sorting..." << endl;
	Sorter<int>::show(a, 10);
}

void SorterTest::run()
{
	printStart("selectionSortTest()");
	selectionSortTest();
	printEnd("selectionSortTest()");
}