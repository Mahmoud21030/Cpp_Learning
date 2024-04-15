#include <iostream>

using namespace std;

class A
{
    public:
    int x;
    static int y;
    //static int getx(){return x;}; //static function access only static member
    static int gety(){return y;}; //static function access only static member
};
//must define the static
int A::y= 0;

int main()
{
    A myA;
    cout<< myA.y;
    return 0;
}