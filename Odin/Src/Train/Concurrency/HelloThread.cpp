// HelloThread.cpp

#include "HelloThread.h"
#include <iostream>
#include <thread>

using namespace std;

HelloThread::HelloThread()
{
}

HelloThread::~HelloThread()
{
}

void hello()
{
	std::cout << "Hello Concurrent World\n";
}

void HelloThread::Run()
{
	thread t(hello);
	t.join();

	cout << "Hello Thread" << endl;
}


