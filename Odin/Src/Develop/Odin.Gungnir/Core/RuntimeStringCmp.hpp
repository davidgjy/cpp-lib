#include <string>

using namespace std;

// function object to compare strings
// - allows you to set the comparison criterion at runtime
// - allows you to compare case insensitive
class RuntimeStringCmp 
{
public:
	// constants for the comparison criterion
	enum cmp_mode { normal, nocase };
private:
	// actual comparison mode
	const cmp_mode mode;

	// auxiliary function to compare case insensitive
	static bool nocase_compare(char c1, char c2) 
	{
		return toupper(c1) < toupper(c2);
	}
public:
	// constructor: initializes the comparison criterion
	RuntimeStringCmp(cmp_mode m = normal) : mode(m) { }

	// the comparison
	bool operator() (const string& s1, const string& s2) const 
	{
		if (mode == normal) 
		{
			return s1<s2;
		}
		else 
		{
			return lexicographical_compare(s1.begin(), s1.end(),
				s2.begin(), s2.end(),
				nocase_compare);
		}
	}
};