// example for function te,plate bubble sort
#include<iostream>
using namespace std;
template <class T>
void bubble_sort(T a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=n-1; i<j; j--)
        {
            if(a[j]<a[j-1])
            {
                swap (a[j], a[j-1]);
            }
        }
    }
}

int main()
{
    int s1[5] = {1,5,2,8,3};
    char s2[7] = {'s', 'b', 'P', 'd', 'f', 'w', 'A'};
    bubble_sort<int> (s1,5);
    bubble_sort<char> (s2,7);
    cout << "Sorted array s1:\n";
    for(int i=0;i<5; i++)
       cout << s1[i];
    cout << "\n\nSorted array s2:\n";
    for (int i=0; i<7; i++)
        cout << s2[i];
    cout << endl;
    return 0;
}