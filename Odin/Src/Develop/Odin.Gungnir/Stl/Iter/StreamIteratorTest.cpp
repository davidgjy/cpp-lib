#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <string>
#include "StreamIteratorTest.h"
#include "../../Core/ContainerUtil.h"

using namespace std;

void StreamIteratorTest::run()
{
	/*
	vector<string> coll;

	// copy from screen input
	copy(istream_iterator<string>(cin), istream_iterator<string>(), back_inserter(coll));

	sort(coll.begin(), coll.end());

	unique_copy(coll.cbegin(), coll.cend(), ostream_iterator<string>(cout, "\n"));
	*/

	vector<int> coll = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	copy(coll.crbegin(), coll.crend(), ostream_iterator<int>(cout, " "));
	cout << endl;
}

