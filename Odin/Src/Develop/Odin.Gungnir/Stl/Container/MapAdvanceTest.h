#ifndef		_Stl_Container_Map_Advance_Test_H_
#define		_Stl_Container_Map_Advance_Test_H_

#include "../../TestBase.h"
#include <map>

class RuntimeStringCmp;
typedef map<string, string, RuntimeStringCmp> StringStringMap;

class MapAdvanceTest : public TestBase
{
public:
	
	MapAdvanceTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
private:
	void useAsAssociativeArray();
	void useAsDictionary();
	void findValueInMap();
	void runtimeMapCompare();
	// private inner method 
	void fillAndPrint(StringStringMap& coll);
};



#endif