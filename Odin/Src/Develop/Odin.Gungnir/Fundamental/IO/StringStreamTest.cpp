#include "StringStreamTest.h"
#include <iostream>
#include <sstream>

using namespace std;

void StringStreamTest::inputConnect()
{
	ostringstream outStream;
	while (cin)
	{
		string nextToken;
		cout << "Next token: ";
		cin >> nextToken;
		if (nextToken == "done")
			break;
		outStream << nextToken << " ";
	}
	cout << "The result is: " << outStream.str() << endl;
}

void StringStreamTest::run()
{
	printStart("inputConnect()");
	inputConnect();
	printEnd("inputConnect()");
}