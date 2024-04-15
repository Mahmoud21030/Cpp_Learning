#include <iostream>
using namespace std;


//nameless class
class
{
public:
    int x = 3;
} myclass;

//it will not have desructor as contructor is must
int main()
{
    cout << myclass.x << endl;
}