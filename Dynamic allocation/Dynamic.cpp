#include <iostream>
#include <memory>
using namespace std;

int main()
{
    int* ptr = new int;

    *ptr = 10;

    cout << "Address: " << ptr << endl;
    cout << "Value: " << *ptr<< endl;

    /*by Reference*/
    int &Ref = *(new int);
    cout<<"Value by ref: "<<Ref<< endl;
    Ref= 10;
    cout<<"Value after by ref: "<<Ref<< endl;


    return 0;
}
