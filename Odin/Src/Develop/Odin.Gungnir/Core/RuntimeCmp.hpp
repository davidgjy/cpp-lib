#include <set>

using namespace std;

// type for runtime sorting criterion
class RuntimeCmp 
{
public:
	enum cmp_mode { normal, reverse };
private:
	cmp_mode mode;
public:
	// constructor for sorting criterion
	// - default criterion uses value normal
	RuntimeCmp(cmp_mode m = normal) : mode(m) { }
	// comparison of elements
	// - member function for any element type
	template <typename T>
	bool operator() (const T& t1, const T& t2) const 
	{
		return mode == normal ? t1<t2
			: t2<t1;
	}
	// comparison of sorting criteria
	bool operator== (const RuntimeCmp& rc) const 
	{
		return mode == rc.mode;
	}
};

// type of a set that uses this sorting criterion
typedef set<int, RuntimeCmp> IntSet;


