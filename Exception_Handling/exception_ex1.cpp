#include<iostream>
using namespace std;
int main()
{
    double x, y;
    cin >> x >> y;
    try{
        if(x == 0.0)
            throw 0;
        if(y==0.0)
            throw string("Y is zreo");
        if(x+y == 0)
            throw (x+y);
    }
    catch (int e1){cout << e1 << endl;}
    catch (string &e2) {cout << e2 << endl;}
    catch (...) {cout << "x+y is zero\n";}
    // (...) it handles all type of exception which are nat caught by above catchers
    cout << "Bye\n";
    return 0;
}
