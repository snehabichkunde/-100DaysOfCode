// Example demonstrating the use of showpos and noshowpos

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << showpos << 123 << endl;      // Outputs: +123
    cout << showpos << -456 << endl;     // Outputs: -456
    cout << noshowpos << 789 << endl;    // Outputs: 789
    return 0;
}