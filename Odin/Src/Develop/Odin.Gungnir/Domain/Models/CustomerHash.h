#ifndef _Domain_Models_CustomerHash_H_
#define _Domain_Models_CustomerHash_H_

#include "Customer.h"
#include "../../Core/hashval.hpp"

class CustomerHash
{
public:
	std::size_t operator() (const Customer& c) const 
	{
		return hash_val(c.fname, c.lname, c.no);
	}
};

#endif