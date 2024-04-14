#include <iostream>
#include <iterator>

using namespace std;

//Dynamically allocated memory is allocated on Heap
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

    /*Array dynamic*/
    //see difference btw new int[10] vs new int(10)
    //int * arr = new int[10];
    int arr[5] {1,2,3,4,5};
    cout<<"size of the arr: "<<sizeof(arr)<<endl;

    //end() doesn't work for pointer to array
    for(auto &it : arr)
    {
        cout<<it<<endl;
        it = 10;
    }

    //end() doesn't work for pointer to array
    // for (int* p = arr; p != std::end(arr); ++p) {
    //     cout << *p <<endl;
    // }

    delete ptr;
    delete &Ref;
    //delete arr;

    return 0;
}
