// Test.h
#ifndef _TEST_H_
#define _TEST_H_

class Test
{
public:
	virtual ~Test() = 0;
	virtual void Run() = 0;
protected:
	Test();
private:
};

#endif //~_TEST_H_