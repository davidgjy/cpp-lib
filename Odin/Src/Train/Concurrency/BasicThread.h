// BasicThread.h

#include "../Test.h"

#ifndef _BASIC_THREAD_H_
#define _BASIC_THREAD_H_

class Test;

class BasicThread : public Test
{
public:
	~BasicThread();
	BasicThread();
	void Run();
protected:
private:
};

#endif