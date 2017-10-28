#include <iostream>
#include <algorithm>
#include <vector>
#include "VectorAlgTest.h"
#include "../../Core/ContainerUtil.h"

void VectorAlgTest::run()
{
	// create vector with elements from 1 to 6 in arbitrary order
	vector<int> coll = { 2, 5, 4, 1, 6, 3 };

	// find and print minimum and maximum elements
	auto minpos = min_element(coll.cbegin(), coll.cend());
	cout << "min: " << *minpos << endl;
	auto maxpos = max_element(coll.cbegin(), coll.cend());
	cout << "max: " << *maxpos << endl;

	cout << "original vector:" << endl;
	ContainerUtil<vector<int>>::printElements(coll);
	// sort all elements
	sort(coll.begin(), coll.end());
	cout << "after sorting:" << endl;
	ContainerUtil<vector<int>>::printElements(coll);
	
	// find the first element with value 3
	// - no cbegin()/cend() because later we modify the elements pos3 refers to
	auto pos3 = find(coll.begin(), coll.end(), 3);                     

	// reverse the order of the found element with value 3 and all following elements
	reverse(pos3, coll.end());
	cout << "after reverse from the position of value 3:" << endl;
	ContainerUtil<vector<int>>::printElements(coll);
}