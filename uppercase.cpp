#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << uppercase << hex << 123 << endl;      // Outputs: 7B
    cout << nouppercase << hex << 456 << endl;    // Outputs: 1c8
    cout << uppercase << oct << 789 << endl;      // Outputs: 1145
    cout << nouppercase << dec << 345 << endl;    // Outputs: 345
    return 0;
}