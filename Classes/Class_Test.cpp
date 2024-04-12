#include <iostream>

class C1 {
    int x;
 
public:
    C1() 
    { 
      std::cout << "C1's constructor called " << std::endl; 
    }
};
 
class C2 {
    static C1 a;
 
public:
    C2() 
    { 
        std::cout << "C2's constructor called " << std::endl; 
    }
};

class myclass
{
    public:
    int T1 = 6;
    int T2;
    static int T3 ; /* Static members are only declared in a class declaration,
     not defined. They must be explicitly defined outside the class using the scope resolution operator.*/

    //myclass() = default; //default constructot, Not user-provided
    myclass() {
              std::cout << "myclass is constructed" << std::endl; 
    } //user-provided

    private:
    int private_int;
    
    C2 x;
};

int myclass::T3 = 3;

int main()
{
    myclass e;
    std::cout<<"Hello world"<<" "<<myclass().T1<<std::endl; //using temp class
    // std::cout<<"Hello world"<<" "<<myclass::T1<<std::endl; //must be static

    std::cout<<"T2: "<<e.T2<<std::endl; //garbage if user provided or 0 if Not user-provided
    std::cout<<"T3: "<<myclass::T3<<std::endl; 
    //std::cout<<"T3: "<<e::T3<<std::endl;  //error, must be the class

    
    C1 x;


    return 0;
}

