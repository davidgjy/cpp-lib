#ifndef _Container_Util_H_
#define _Container_Util_H_

#include "FormatConstants.h"
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

template <typename T>
class ContainerUtil
{
public:
	static void printElements(const T& coll);
	static void printMapElements(const T& coll);
	static void printMapInDiv(const T& coll, string leftCol, string rightCol, int width);
	static void printMapInTable(const T& coll, string leftHd, string rightHd, int width, char sep, int sepLen);
};

template <typename T>
void ContainerUtil<T>::printElements(const T& coll)
{
	for (const auto& elem : coll)
	{
		cout << SPACE_2 << elem;
	}
	cout << endl;
}

template <typename T>
void ContainerUtil<T>::printMapElements(const T& coll)
{
	for (const auto& elem : coll)
	{
		cout << elem.first << ": " << elem.second << endl;
	}
	cout << endl;
}

template <typename T>
void ContainerUtil<T>::printMapInDiv(const T& coll, string leftCol, string rightCol, int width)
{
	cout << left;  // left-adjust values
	for (const auto& elem : coll) {
		cout << leftCol << ": " << setw(width) << elem.first
			<< rightCol << ": " << elem.second << endl;
	}
	cout << endl;
}

template <typename T>
void printMapInTable(const T& coll, string leftHd, string rightHd, int width, char sep, int sepLen)
{
	cout.setf(ios::left, ios::adjustfield);
	cout << ' ' << setw(width) << leftHd
		<< rightHd << endl;
	cout << setfill(sep) << setw(sepLen) << ""
		<< setfill(' ') << endl;
	for (const auto& elem : coll) {
		cout << ' ' << setw(width) << elem.first
			<< elem.second << endl;
	}
	cout << endl;
}

#endif