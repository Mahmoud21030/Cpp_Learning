// C++ Program to demonstrate
// the Virtual Function
#include <iostream>
using namespace std;

// Declaring a Base class
class GFG_Base {

public:
	// virtual function
	virtual void display()
	{
		cout << "base display"
			<< "\n\n";
	}

	void print()
	{
		cout << "base print"
			<< "\n\n";
	}
};

// Declaring a Child Class
class GFG_Child : public GFG_Base {

public:
	void display()
	{
		cout << "child display"
			<< "\n\n";
	}

	void print()
	{
		cout << "child print"
			<< "\n\n";
	}
};

// Driver code
int main()
{
	// Create a reference of class GFG_Base
	GFG_Base* base;

	GFG_Child child;

	base = &child;

	// This will call the virtual function
	base->display();

	// this will call the non-virtual function
	base->print();
}
