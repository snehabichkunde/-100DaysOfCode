// template example: creat a tamplate to return the max of 
#include<iostream>
using namespace std;
template <typename T>
T my_max (T x, T y)
{
    return ((x>y)?x:y);
}
int main()
{
    cout << my_max<int>(3,4) << endl;
    cout << my_max<char> ('s','v') << endl;
    return 0;
}
