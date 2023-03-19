// CPP Program to demonstrate the Logical Operators
#include <iostream>
using namespace std;

int main()
{
	int a = 6, b = 4;

	// Logical AND operator
	cout << "a && b is " << (a && b) << endl;  // 1
	
	// Logical OR operator
	cout << "a ! b is " << (a > b) << endl;   // 1
	
	// Logical NOT operator
	cout << "!b is " << (!b) << endl;   // 0

	return 0;
}