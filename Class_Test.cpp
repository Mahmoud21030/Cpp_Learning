#include <iostream>


class myclass
{
    public:
    int T1 = 6;
    int T2;
    static int T3 ; /* Static members are only declared in a class declaration,
     not defined. They must be explicitly defined outside the class using the scope resolution operator.*/
     
    //myclass() = default; //default constructot, Not user-provided
    myclass() {} //user-provided

    private:
    int private_int;

};


int main()
{
    myclass e;
    std::cout<<"Hello world"<<" "<<myclass()::T1<<std::endl; //using temp class
    std::cout<<"T2: "<<myclass().T3<<std::endl; //garbage if user provided or 0 if Not user-provided
    return 0;
}

