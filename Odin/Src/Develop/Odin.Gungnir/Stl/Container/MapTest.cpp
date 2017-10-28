#include <map>
#include <string>
#include <iostream>
#include <algorithm>
#include "MapTest.h"
#include "../../Core/CoreCont.hpp"
#include "../../Core/ContainerUtil.h"

using namespace std;

void MapTest::simpleEnumeration()
{
	map<string,double> coll { 
		{ "tim", 9.9 },                          
		{ "struppi", 11.77 }
	} ;

	// for range-based enumeration
	cout << "for range-based enumeration: " << endl;
	for (auto elem : coll)
	{
		cout << elem.first << ": " << elem.second << endl;
	}

	// iterating
	cout << "iterating: " << endl;
	map<string, double>::iterator pos;
	for (pos = coll.begin(); pos != coll.end(); ++pos)
	{
		cout << pos->first << ": " << pos->second << endl;
	}

    // square the value of each element:
    for_each (coll.begin(), coll.end(),
              [] (pair<const string,double>& elem) {
                    elem.second *= elem.second;
              });

    // print each element:
	cout << "for_each lambda enumeration: " << endl;
    for_each (coll.begin(), coll.end(),
              [] (const map<string,double>::value_type& elem) {
                    cout << elem.first << ": " << elem.second << endl;
              });
}

void MapTest::replaceKey()
{
	map<string, double> books{
		{ "iOS Programming", 10.9 },
		{ "Android Programming", 9.6 },
		{ "Java EE Tutorial", 10.2 },
		{ "Cocos2d-x 3.x Essential", 6.8 },
		{ "Cocoa Handbook", 12.8 }
	};

	cout << "before replace key: " << endl;
	ContainerUtil<map<string, double>>::printMapElements(books);

	cout << "------------------------------------------------" << endl; 

	OGCore_Cont::replace_key(books, "Android Programming", "Android In Action");

	cout << "after replace key: " << endl;
	ContainerUtil<map<string, double>>::printMapElements(books);

	cout << "------------------------------------------------" << endl;

	books.erase("Java EE Tutorial");
	cout << "after remove: " << endl;
	ContainerUtil<map<string, double>>::printMapElements(books);
}

void MapTest::insertOperation()
{
	map<string, double> stocks{
		{ "facebook", 52.1 },
		{ "google", 850.6 },
		{ "microsoft", 23.1 },
		{ "apple", 520.5 },
		{ "alibaba", 22.9 }
	};
		
	cout << "** original stocks **:" << endl;
	ContainerUtil<map<string, double>>::printMapElements(stocks);
	cout << "------------------------------------------------" << endl;

	// value_type
	stocks.insert(map<string, double>::value_type("baidu", 98.1));
	cout << "** after inserting by value_type **:" << endl;
	ContainerUtil<map<string, double>>::printMapElements(stocks);
	cout << "------------------------------------------------" << endl;

	// pair<>
	stocks.insert(pair<string, double>("dang", 9.8));
	cout << "** after inserting by pair<> **:" << endl;
	ContainerUtil<map<string, double>>::printMapElements(stocks);
	cout << "------------------------------------------------" << endl;

	// make_pair()
	stocks.insert(make_pair("amazon", 150.8));
	cout << "** after inserting by make_pair() **:" << endl;
	ContainerUtil<map<string, double>>::printMapElements(stocks);
}

void MapTest::run()
{
	printStart("simpleEnumeration()");
	simpleEnumeration();
	printEnd("simpleEnumeration()");

	printStart("replaceKey()");
	replaceKey();
	printEnd("replaceKey()");

	printStart("insertOperation()");
	insertOperation();
	printEnd("insertOperation()");
}