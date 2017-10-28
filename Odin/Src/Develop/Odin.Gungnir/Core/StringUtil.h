#include <string>

using namespace std;

#ifndef _STRING_UTIL_H_
#define _STRING_UTIL_H_

class StringUtil
{
public:
	// find the first index of char in dest string and return the index and times of occurance
	static string::size_type find_char(const string &s, char c, string::size_type &occurs);
};

#endif
