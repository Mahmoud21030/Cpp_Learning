// C++ program to demonstrate constructors 
#include <bits/stdc++.h> 
using namespace std; 
class Geeks 
{ 
	public: 
	int id; 
	
	//Default Constructor 
	Geeks() 
	{ 
		cout << "Default Constructor called" << endl; 
		id=-1; 
	} 
	
	//Parameterized Constructor 
	Geeks(int x) 
	{ 
		cout <<"Parameterized Constructor called "<< endl; 
		id=x; 
	} 
}; 

int main() { 
	
	// obj1 will call Default Constructor 
	Geeks obj1; 
	cout <<"Geek id is: "<<obj1.id << endl; 
	
	// obj2 will call Parameterized Constructor 
	Geeks obj2(21); 
	cout <<"Geek id is: " <<obj2.id << endl; 

    // obj3 will call Copy Constructor 
	Geeks obj3(obj2); 
	cout <<"Geek id is: " <<obj3.id << endl; 

	return 0; 
} 
