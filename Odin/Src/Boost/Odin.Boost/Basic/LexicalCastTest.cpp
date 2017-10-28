#include <iostream>
#include <boost/lexical_cast.hpp>
#include <boost/timer.hpp>
#include "LexicalCastTest.h"

void LexicalCastTest::run()
{
	int a = boost::lexical_cast<int>("123");
	double b = boost::lexical_cast<double>("123.0123456789");
	std::string s0 = boost::lexical_cast<std::string>(a);
	std::string s1 = boost::lexical_cast<std::string>(b);
	std::cout << "number is: " << a << " " << b << std::endl;
	std::cout << "string is: " << s0 << " " << s1 << std::endl;


	int c = 0;
	try
	{
		c = boost::lexical_cast<int>("abcd");
	}
	catch (boost::bad_lexical_cast & e)
	{
		std::cout << e.what() << std::endl;
	}
}