#include <iostream>
#include <string>
#include "TestBase.h"
#include "Basic/LexicalCastTest.h"
#include "Basic/ProgressTest.h"

using namespace std;

void versionInfo()
{
	cout << "---------------------------------------------" << endl;
	cout << "--  Odin Boost v1.0" << endl;
	cout << "--  Author: Master HaKu" << endl;
	cout << "--  Copy Right:  2015" << endl;
	cout << "---------------------------------------------" << endl;
	cout << "\n" << endl;
}

TestBase* testRunner()
{
	string func;

	cout << "Please Input Function Name To Test:" << endl;
	getline(cin, func);

	/*
		Basic
	*/
	if (func == "basic_lc_test")
	{
		return new LexicalCastTest("basic_lc_test", "Lexical Cast Test");
	}

	if (func == "basic_pg_test")
	{
		return new ProgressTest("basic_pg_test", "Progress Test");
	}

	return nullptr;
}

int main()
{
	versionInfo();

	TestBase *test = nullptr;

	test = testRunner();

	if (test != nullptr)
	{
		test->getDesp();
		test->run();
	}

	delete test;

	return 0;
}

