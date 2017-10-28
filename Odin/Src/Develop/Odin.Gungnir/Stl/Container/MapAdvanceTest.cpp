#include <map>
#include <string>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cctype>
#include "../../Core/RuntimeStringCmp.hpp"
#include "MapAdvanceTest.h"
#include "../../Core/ContainerUtil.h"

using namespace std;

void MapAdvanceTest::useAsAssociativeArray()
{
	// create map / associative array
	// - keys are strings
	// - values are floats
	typedef map<string, float> StringFloatMap;

	StringFloatMap stocks;      // create empty container

	// insert some elements
	stocks["BASF"] = 369.50;
	stocks["VW"] = 413.50;
	stocks["Daimler"] = 819.00;
	stocks["BMW"] = 834.00;
	stocks["Siemens"] = 842.20;

	// print all elements
	ContainerUtil<StringFloatMap>::printMapInDiv(stocks, "Stock", "Price", 15);

	// boom (all prices doubled)
	StringFloatMap::iterator pos;
	for (pos = stocks.begin(); pos != stocks.end(); ++pos) {
		pos->second *= 2;
	}

	// print all elements
	ContainerUtil<StringFloatMap>::printMapInDiv(stocks, "Stock", "Price", 15);

	// rename key from "VW" to "Volkswagen"
	// - provided only by exchanging element
	stocks["Volkswagen"] = stocks["VW"];
	stocks.erase("VW");

	// print all elements
	ContainerUtil<StringFloatMap>::printMapInDiv(stocks, "Stock", "Price", 15);
}

void MapAdvanceTest::useAsDictionary()
{
	// create multimap as string/string dictionary
	multimap<string, string> dict;

	// insert some elements in random order
	dict.insert({ { "day", "Tag" }, { "strange", "fremd" },
	{ "car", "Auto" }, { "smart", "elegant" },
	{ "trait", "Merkmal" }, { "strange", "seltsam" },
	{ "smart", "raffiniert" }, { "smart", "klug" },
	{ "clever", "raffiniert" } });

	// print all elements
	cout.setf(ios::left, ios::adjustfield);
	cout << ' ' << setw(10) << "english "
		<< "german " << endl;
	cout << setfill('-') << setw(30) << ""
		<< setfill(' ') << endl;
	for (const auto& elem : dict) {
		cout << ' ' << setw(10) << elem.first
			<< elem.second << endl;
	}
	cout << endl;

	// print all values for key "smart"
	string word("smart");
	cout << word << ": " << endl;
	for (auto pos = dict.lower_bound(word);
		pos != dict.upper_bound(word);
		++pos) {
		cout << "    " << pos->second << endl;
	}

	// print all keys for value "raffiniert"
	word = ("raffiniert");
	cout << word << ": " << endl;
	for (const auto& elem : dict) {
		if (elem.second == word) {
			cout << "    " << elem.first << endl;
		}
	}
}

void MapAdvanceTest::findValueInMap()
{
	// map with floats as key and value
	// - initializing keys and values are automatically converted to float
	map<float, float> coll = { { 1, 7 }, { 2, 4 }, { 3, 2 }, { 4, 3 },
	{ 5, 6 }, { 6, 1 }, { 7, 3 } };

	// search an element with key 3.0  (logarithmic complexity)
	auto posKey = coll.find(3.0);
	if (posKey != coll.end()) 
	{
		cout << "key 3.0 found ("
			<< posKey->first << ":"
			<< posKey->second << ")" << endl;
	}

	// search an element with value 3.0 (linear complexity)
	auto posVal = find_if(coll.begin(), coll.end(),
		[](const pair<float, float>& elem) {
		return elem.second == 3.0;
	});
	if (posVal != coll.end()) 
	{
		cout << "value 3.0 found ("
			<< posVal->first << ":"
			<< posVal->second << ")" << endl;
	}
}

void MapAdvanceTest::fillAndPrint(StringStringMap& coll)
{
	// insert elements in random order
	coll["Deutschland"] = "Germany";
	coll["deutsch"] = "German";
	coll["Haken"] = "snag";
	coll["arbeiten"] = "work";
	coll["Hund"] = "dog";
	coll["gehen"] = "go";
	coll["Unternehmen"] = "enterprise";
	coll["unternehmen"] = "undertake";
	coll["gehen"] = "walk";
	coll["Bestatter"] = "undertaker";

	// print elements
	cout.setf(ios::left, ios::adjustfield);
	for (const auto& elem : coll) 
	{
		cout << setw(15) << elem.first << " "
			<< elem.second << endl;
	}
	cout << endl;
	cout << "#############################################" << endl;
}

void MapAdvanceTest::runtimeMapCompare()
{
	// create a container with the default comparison criterion
	StringStringMap coll1;
	fillAndPrint(coll1);

	// create an object for case-insensitive comparisons
	RuntimeStringCmp ignorecase(RuntimeStringCmp::nocase);

	// create a container with the case-insensitive comparisons criterion
	StringStringMap coll2(ignorecase);
	fillAndPrint(coll2);
}

void MapAdvanceTest::run()
{
	printStart("useAsAssociativeArray()");
	useAsAssociativeArray();
	printEnd("useAsAssociativeArray()");

	printStart("useAsDictionary()");
	useAsDictionary();
	printEnd("useAsDictionary()");

	printStart("findValueInMap()");
	findValueInMap();
	printEnd("findValueInMap()");

	printStart("runtimeMapCompare()");
	runtimeMapCompare();
	printEnd("runtimeMapCompare()");
}
