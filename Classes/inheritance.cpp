#include <iostream>
using namespace std;
// C++ Implementation to show that a derived class
// doesn’t inherit access to private data members.
// However, it does inherit a full parent object.
class A
{
public:
    int x = 1;

protected:
    int y = 2;

//private:
    int z = 3;
};

class B : public A
{
public:
    void print()
    {
        cout << x << y << z;
    }
    // x is public
    // y is protected
    // z is not accessible from B
};

class C : protected A
{
public:
    void print()
    {
        cout << x << y << z;
    }
    // x is protected
    // y is protected
    // z is not accessible from C
};

class D : private A // 'private' is default for classes
{
public:
    void print()
    {
        cout << x << y << z;
    }
    // x is private
    // y is private
    // z is not accessible from D
};

int main()
{
     D e;
    e.print();
}