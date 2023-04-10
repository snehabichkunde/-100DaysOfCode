#include<iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    ptr = new(nothrow) int;
    if (!ptr)
    {
        cout << "Memory allocation s failed" << endl;
    }
    else{
        *ptr = 29;
        cout << "Value at ptr: " << *ptr << endl;
    }
    
    float *f = new float (23.45);
    cout << "Value at f:" << *f << endl;
    int n=5;
    int *q = new (nothrow) int [n];
    if(!q){
        cout<< "Memory allocation is failed" << endl;
    }
    else {
        for (int i=0; i<5; i++)
        {
            cout << q[i] << " ";
        }
        cout << endl;
    }
    delete ptr;
    delete f;
    delete[] q;
    return 0;
}
