#include <iostream>

// C++ program to demonstrate the
// making of structure
#include <bits/stdc++.h>
using namespace std;

// Define structure
struct GFG {
	int G1;
	char G2;
	float G3;
	long long add(int x ,int y)
	{
		return x + y;
	}
};

// Driver Code
int main()
{
	// Declaring a Structure
	struct GFG Geek;
    //  GFG Geek; //no need for struct keyword like in c
	Geek.G1 = 85;
	Geek.G2 = 'G';
	Geek.G3 = 989.45;
	cout << "The value is : " << Geek.G1 << endl;
	cout << "The value is : " << Geek.G2 << endl;
	cout << "The value is : " << Geek.G3 << endl;

	/*Test function in struct, works like class*/
	cout<<"Test add function in struct: "<<Geek.add(1,2)<<endl;

	return 0;
}
