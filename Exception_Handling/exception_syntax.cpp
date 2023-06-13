// c++ prodies three keywords for exception handling 
/* 
1. try : the code might throw exception
2. throw : to throw the exception
3. catch : handle the exception
*/

#include<iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    try{
        if(y==0){
            throw 0;
        }
        cout << "Result is: " << x/y << endl;
    }
    catch(int x){
        cout << "The division is zero" << endl;
    }
    return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 