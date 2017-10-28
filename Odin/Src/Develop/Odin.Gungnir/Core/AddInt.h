class AddInt
{
private:
	int theValue;    // the value to add
public:
	// constructor initializes the value to add
	AddInt(int v) : theValue(v) { }

	// the "function call" for the element adds the value
	void operator() (int& elem) const 
	{
		elem += theValue;
	}
};
