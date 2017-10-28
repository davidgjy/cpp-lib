#ifndef		Print_Int_H_
#define		Print_Int_H_

#include <iostream>
using namespace std;
class PrintInt 
{
public:
	void operator() (int elem) const 
	{
		cout << elem << ' ';
	}
};

#endif
