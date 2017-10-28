// HelloThread.h

#include "../Test.h"

#ifndef _HELLO_THREAD_H_
#define _HELLO_THREAD_H_

class Test;

class HelloThread : public Test
{
public:
	~HelloThread();
	HelloThread();
	void Run();
protected:
private:
};

#endif
