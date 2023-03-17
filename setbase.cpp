// Code implementation showing the use of hex, dec and oct

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << hex << 123 << endl;      // Outputs: 7b
    cout << oct << 456 << endl;      // Outputs: 710
    cout << dec << 789 << endl;      // Outputs: 789
    return 0;
}