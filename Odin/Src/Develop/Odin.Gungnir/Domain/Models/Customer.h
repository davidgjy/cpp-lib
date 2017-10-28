#ifndef _Domain_Models_Customer_H_
#define _Domain_Models_Customer_H_

#include <string>
using namespace std;

class Customer 
{
private:
	string fname;
	string lname;
	long   no;
public:
	Customer(const string& fn, const string& ln, long n)
		: fname(fn), lname(ln), no(n) {}
	friend ostream& operator << (ostream& strm, const Customer& c) {
		return strm << "[" << c.fname << "," << c.lname << ","
			<< c.no << "]";
	}
	friend class CustomerHash;
	friend class CustomerEqual;
};

#endif