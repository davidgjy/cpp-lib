#ifndef _Vector_Util_H_
#define _Vector_Util_H_

#include <vector>
#include "FormatConstants.h"

using namespace std;

template <typename T>
class VectorUtil
{
public:
	static void display(const vector<int> data);
};

template <typename T>
void VectorUtil<T>::display(const vector<int> data)
{
	for (const auto& elem : data)
	{
		cout << SPACE_2 << elem << endl;
	}
}

#endif