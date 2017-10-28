#ifndef _FACTORY_H_
#define _FACTORY_H_

class Test;

class Factory
{
public:
	virtual ~Factory() = 0;
	virtual Test* CreateTest() = 0;
protected:
	Factory();
private:
};

/*
	---------------------------------------------------------
		Basic Module Factory
	---------------------------------------------------------
*/

// BasicTestFactory
class BasicTestFactory :public Factory
{
public:
	~BasicTestFactory();
	BasicTestFactory();
	Test* CreateTest();
protected:
private:
};

// MyStringTestFactory
class MyStringTestFactory :public Factory
{
public:
	~MyStringTestFactory();
	MyStringTestFactory();
	Test* CreateTest();
protected:
private:
};

/*
	---------------------------------------------------------
		Concurrency Module Factory
	---------------------------------------------------------
*/

// HelloThreadFactory
class HelloThreadFactory :public Factory
{
public:
	~HelloThreadFactory();
	HelloThreadFactory();
	Test* CreateTest();
protected:
private:
};

// BasicThreadFactory
class BasicThreadFactory :public Factory
{
public:
	~BasicThreadFactory();
	BasicThreadFactory();
	Test* CreateTest();
protected:
private:
};


/*
	---------------------------------------------------------
		File & Stream Module Factory
	---------------------------------------------------------
*/

// WriteCharToStreamFactory
class WriteCharToStreamFactory :public Factory
{
public:
	~WriteCharToStreamFactory();
	WriteCharToStreamFactory();
	Test* CreateTest();
protected:
private:
};

#endif //~_FACTORY_H_
