#ifndef		TEST_BASE_H_
#define		TEST_BASE_H_

#include <string>

using namespace std;

class TestBase
{
private:
	string cmd;
	string description;
public:
	TestBase();		// default constructor
	TestBase(const string &c, const string &d);
	~TestBase();
	string getCmd() { return cmd; }
	string getDesp() { return description; }
	virtual void run() = 0;
};

#endif