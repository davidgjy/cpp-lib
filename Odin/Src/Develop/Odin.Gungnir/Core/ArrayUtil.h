#ifndef _Array_Util_H_
#define _Array_Util_H_

#include "FormatConstants.h"

using namespace std;

template <typename T>
class ArrayUtil
{
public:
	static void display(int data[], int len);
};

template <typename T>
void ArrayUtil<T>::display(int data[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << SPACE_2 << data[i] << endl;
	}
}

#endif