#include <iostream>
#include "FindCharTest.h"
#include "StringUtil.h"

using namespace std;

void FindCharTest::run()
{
	size_t ctr = 0;
	auto index = StringUtil::find_char("Hellaao Boom Ko", 'o', ctr);
	cout << index << " " << ctr << endl;
}
