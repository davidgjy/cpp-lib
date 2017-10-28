#ifndef		_Stl_Container_Map_Test_H_
#define		_Stl_Container_Map_Test_H_

#include "../../TestBase.h"

class MapTest : public TestBase
{
public:
	MapTest(const string &c, const string &d) : TestBase(c, d) { }
	void run();
private:
	void simpleEnumeration();
	void replaceKey();
	void insertOperation();
};

#endif