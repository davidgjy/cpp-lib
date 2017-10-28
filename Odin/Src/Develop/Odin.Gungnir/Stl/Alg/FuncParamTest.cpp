#include <iostream>
#include <algorithm>
#include <vector>
#include "FuncParamTest.h"
#include "../../Core/ContainerUtil.h"

using namespace std;

void print(int elem)
{
	cout << elem << ' ';
}

void FuncParamTest::forEachFunc()
{
	vector<int> coll;

	for (int i = 1; i <= 9; ++i)
	{
		coll.push_back(i);
	}

	// print all elements
	for_each(coll.cbegin(), coll.cend(), print);
	cout << endl;
}

void FuncParamTest::run()
{
	forEachFunc();
}

