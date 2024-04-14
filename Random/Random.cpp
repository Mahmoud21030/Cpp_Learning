// #include <iostream>

// class Base {
// public:
//     Base() {
//         std::cout << "Constructing Base\n";
//     }

//     ~Base() {
//         std::cout << "Destructing Base\n";
//     }
//     virtual void print(){std::cout<<"hellow";}

// };

// class Derived : public Base {
// public:
//     Derived() {
//         std::cout << "Constructing Derived\n";
//     }

//     ~Derived() {
//         std::cout << "Destructing Derived\n";
//     }
//     void print(){std::cout<<"hello drived";}
// };

// int main() {
//     Base *d =new Derived();
//     d->print();
//     return 0;
// }
// #include <iostream>

// class Test
// {
//     static int count;

// public:
//     Test &fun();
// };

// int Test::count = 0;
// Test &Test::fun()
// {
//     Test::count++;
//     std::cout << "Count: " << Test::count << std::endl;
//     return *this;
// }
// int main()
// {
//     Test t1, t2;
//     t1.fun().fun().fun().fun();
//     return 0;
// }
// #include <iostream>

// class A {
// public:

//     ~A() {
//         std::cout << "Destructor called" << std::endl;
//     }
// };

// int main() {
//     A* a1 = new A();
//     A* a2 = new A();

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int Add(int X, int Y, int Z)
// {
//     return X + Y + Z;
// }

// double Add(double X, double Y, double Z)
// {
//     return X + Y + Z;
// }

// int main()
// {
//     cout << Add(5, 6);
//     cout << Add(5.5, 6.6);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int fun(int x,  int y = 0, int z=0)
// {
//     return (x + y + z);
// }

// int main()
// {
//     cout << fun(0,0,10);
//     const char * a = "hello\0world";
//     cout<<a;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Point
// {
//     int x, y;
// public:
//     Point (int i = 0, int j =0): x(i),y(j)
//     { }
//     int getX() const { return x; }
//     int getY() const{ return y;}
// };

// int main()
// {
//     const Point t;
//     cout << t.getX() << " ";
//     cout << t.getY();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Test
// {
//     static int x;
// public:
//     Test() { x++; }
//     static int getX() {return x;}
// };
// int Test::x = 0;
// int main()
// {
//     cout << Test::getX() << " ";
//     Test t[5];
//     cout << Test::getX();
// }
// #include<iostream>
// using namespace std;
// int x = 1;
// int main()
// {
//     int x = 2;
//     {
//         int x = 3;
//         cout << x << endl;
//     }
//     return 0;
// }
// #include <iostream>
// #include <string>

// int main() {
//     std::string fruit = "apple";
//     switch (fruit) {
//         case "apple":
//             std::cout << "It's an apple." << std::endl;
//             break;
//         case "banana":
//             std::cout << "It's a banana." << std::endl;
//             break;
//         default:
//             std::cout << "Unknown fruit." << std::endl;
//     }
//     return 0;
// }
// #include <iostream>

// using namespace std;

// class MyClass {
// public:
//     ~MyClass() {
//         cout << "Destructor called" << endl;
//     }
// };

// int main() {
//     MyClass obj;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Player {
//     private:
//         int id;
//         static int next_id;
//     public:
//         int getID() { return id; }
//         Player() { id = next_id++; }
// };

// int Player::next_id = 1;

// int main() {
//     Player p1;
//     Player p2;
//     Player p3;
//     cout << p1.getID() << " ";
//     cout << p2.getID() << " ";
//     cout << p3.getID();
//     return 0;
// }
// #include <iostream>
// class Test
// {
//     public:
//         void fun();
// };
// static void Test::fun()
// {
//     std::cout<<"fun() is static";
// }
// int main()
// {
//     Test::fun();
//     return 0;
// }
#include <iostream>
using namespace std;
class A{
public:
    A(){
        cout<<"Constructor called\n";
    }
    ~A(){
        cout<<"Destructor called\n";
    }
};

int main(int argc, char const *argv[])
{
    A *a = new A[5];
    delete a;
    return 0;
}



