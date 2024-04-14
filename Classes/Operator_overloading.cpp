#include <iostream>
using namespace std;

class Complex {
private:
	int real, imag;

public:
	Complex(int r = 0, int i = 0)
	{
		real = r;
		imag = i;
	}

	Complex operator+(Complex const& obj)
	{
        cout<<"Class overloading"<<endl;
		Complex res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}
	void print() { cout << real << " + i" << imag << endl; }
    friend Complex operator+(Complex const& obj ,Complex const& obj2  );

};
//works only if no class overloading
Complex operator+(Complex const& obj ,Complex const& obj2  )
{
    cout<<"Global overloading"<<endl;
    Complex res;
    res.real = obj.real + obj2.real;
    res.imag = obj.imag + obj2.imag;
    return res;
}

int main()
{
	Complex c1(10, 5), c2(2, 4);

	// An example call to "operator+"
	Complex c3 = c1 + c2;
	c3.print();
}
