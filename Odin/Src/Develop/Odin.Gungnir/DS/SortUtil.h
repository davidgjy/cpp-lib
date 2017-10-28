#ifndef _SORT_UTIL_H_
#define _SORT_UTIL_H_

#include <vector>

using namespace std;

template <typename T>
class SortUtil
{
public:
	static void insertionSort(T data[], int len);
	static void insertionSort(vector<T>& data);
};

template <typename T>
void SortUtil<T>::insertionSort(T data[], int len)
{
	int j = 0;
	for (int i = 1; i < len; i++)
	{
		T key = data[i];

		// insert data[i] into the sorted sequence data[0..i-1]
		j = i;
		while (j > 0 && data[j - 1] > key)
		{
			data[j] = data[j - 1];
			j--;
		}

		data[j] = key;
	}
}

template <typename T>
void SortUtil<T>::insertionSort(vector<T>& data)
{
	int j = 0;
	for (int i = 1; i < data.size(); i++)
	{
		T key = data[i];

		// insert data[i] into the sorted sequence data[0..i-1]
		j = i;
		while (j > 0 && data[j - 1] > key)
		{
			data[j] = data[j - 1];
			j--;
		}

		data[j] = key;
	}
}

#endif