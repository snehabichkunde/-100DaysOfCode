#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	cout << "a++ is " << a++ << endl;   // 10
	cout << "++a is " << ++a << endl;   // 12

	int b = 15;
	cout << "b-- is " << b-- << endl;   // 15
	cout << "--b is " << --b << endl;   // 13
	
	return 0;
}