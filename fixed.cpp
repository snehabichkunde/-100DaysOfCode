// Fixed => decimal notation 
// scientific => floating point notation
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double x = 123.456789;

    cout << fixed << x << endl;        // Outputs: 123.456789
    cout << scientific << x << endl;   // Outputs: 1.234568e+02
    return 0;
}