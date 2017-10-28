#include <iostream>
#include <fstream>
#include <boost/progress.hpp>
#include <vector>
#include "ProgressTest.h"

using namespace std;
using namespace boost;

void ProgressTest::case1()
{
	vector<string> v(100);
	ofstream fs("./test.txt");

	//progress_display pd(v.size(),cout ,"%%%", "+++", "???");
	progress_display pd(v.size());

	for (auto& x : v)
	{
		fs << x << endl;
		++pd;
	}
}

//////////////////////////////////////////

void ProgressTest::case2()
{
	vector<string> v(100, "aaa");

	v[10] = ""; v[23] = "";
	ofstream fs("./test.txt");
	progress_display pd(v.size());

	for (auto pos = v.begin(); pos != v.end(); ++pos)
	{
		fs << *pos << endl;
		++pd;
		if (pos->empty())
		{
			cout << "null string # "
				<< (pos - v.begin()) << endl;
		}
	}
}

void ProgressTest::run()
{
	case1();
	case2();
}