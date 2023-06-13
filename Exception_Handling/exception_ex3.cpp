#include<iostream>
using namespace std;
// we can write all the possible exception in function decleration
// seperating by comma
int average (int arr[], int n) throw (string)
{
    if(n==0)
        throw string ("Array size is zero"); 
    int sum =0;
    for (int i=0; i<n; i++){
        sum += arr[i];}
    return (sum/n);
}

int main(){
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    try{
        int res = average(arr,n);
        cout << res << endl;
    }
    catch(string &e) {
        cout << e << endl;
    }
    cout << "bye" << endl;
    delete[] arr;
    return 0;
}