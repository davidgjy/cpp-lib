//Factory.cpp

#include "Factory.h"
#include "Test.h"

#include "Basic/BasicTest.h"
#include "Basic/MyStringTest.h"
#include "Concurrency/HelloThread.h"
#include "Concurrency/BasicThread.h"
#include "FileStream/WriteCharToStream.h"


#include <iostream>

using namespace std;

Factory::Factory()
{
}

Factory::~Factory()
{
}

/*
	---------------------------------------------------------
		Basic Module Factory
	---------------------------------------------------------
*/
BasicTestFactory::BasicTestFactory()
{
	cout << "--- Basic Test Factory ---" << endl;
}

BasicTestFactory::~BasicTestFactory()
{
}

Test* BasicTestFactory::CreateTest()
{
	return new BasicTest();
}

MyStringTestFactory::MyStringTestFactory()
{
	cout << "--- Basic Test Factory ---" << endl;
}

MyStringTestFactory::~MyStringTestFactory()
{
}

Test* MyStringTestFactory::CreateTest()
{
	return new MyStringTest();
}

/*
	---------------------------------------------------------
*/


/*
	---------------------------------------------------------
		Concurrency Module Factory
	---------------------------------------------------------
*/

// HelloThreadFactory
HelloThreadFactory::HelloThreadFactory()
{
	cout << "--- Hello Thread Factory ---" << endl;
}
HelloThreadFactory::~HelloThreadFactory() { }
Test* HelloThreadFactory::CreateTest()
{
	return new HelloThread();
}


// BasicThreadFactory
BasicThreadFactory::BasicThreadFactory()
{
	cout << "--- Basic Thread Factory ---" << endl;
}
BasicThreadFactory::~BasicThreadFactory() { }
Test* BasicThreadFactory::CreateTest()
{
	return new BasicThread();
}

/*
---------------------------------------------------------
*/


/*
	---------------------------------------------------------
		File & Stream Module Factory
	---------------------------------------------------------
*/

// WriteCharToStreamFactory
WriteCharToStreamFactory::WriteCharToStreamFactory()
{
	cout << "--- Write Char To Stream Factory ---" << endl;
}
WriteCharToStreamFactory::~WriteCharToStreamFactory() { }
Test* WriteCharToStreamFactory::CreateTest()
{
	return new WriteCharToStream();
}
