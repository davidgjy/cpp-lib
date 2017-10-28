#ifndef _Domain_Models_CustomerEqual_H_
#define _Domain_Models_CustomerEqual_H_

#include "Customer.h"

class CustomerEqual
{
public:
	bool operator() (const Customer& c1, const Customer& c2) const 
	{
		return c1.no == c2.no;
	}
};

#endif