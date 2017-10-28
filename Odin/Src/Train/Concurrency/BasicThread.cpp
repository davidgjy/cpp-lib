// HelloThread.cpp

#include "BasicThread.h"
#include <iostream>
#include <thread>

using namespace std;

BasicThread::BasicThread()
{
}

BasicThread::~BasicThread()
{
}

void do_something(int& i)
{
	++i;
}

struct func
{
	int& i;

	func(int& i_) :i(i_){}

	void operator()()
	{
		for (unsigned j = 0; j<1000000; ++j)
		{
			do_something(i);
		}
	}
};

// A function that returns while a thread still has access to local variables
void oops()
{
	int some_local_state = 0;
	func my_func(some_local_state);
	std::thread my_thread(my_func);
	my_thread.detach();

	cout << "-- A function that returns while a thread still has access to local variables --" << endl;
	cout << "some_local_state = " << some_local_state << endl;
	cout << endl;
}


void do_something_in_current_thread()
{}

// Waiting for a thread to finish
void f()
{
	int some_local_state = 0;
	func my_func(some_local_state);
	std::thread t(my_func);
	try
	{
		do_something_in_current_thread();
	}
	catch (...)
	{
		t.join();
		throw;
	}
	t.join();

	cout << "-- Waiting for a thread to finish --" << endl;
	cout << "some_local_state = " << some_local_state << endl;
	cout << endl;
}

void BasicThread::Run()
{
	int index;

	cout << "Please select index to continue" << endl;
	cout << "1: A function that returns while a thread still has access to local variables" << endl;
	cout << "2: Waiting for a thread to finish" << endl;
	cin >> index;
	switch (index)
	{
		case 1:
			oops();
			break;
		case 2:
			f();
			break;
		default:
			break;
	}
}


