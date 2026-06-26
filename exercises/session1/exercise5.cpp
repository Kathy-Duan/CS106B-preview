#include <iostream>
#include <limits.h>

using namespace std;

int main() {
    int number;
    int max = INT_MIN;  // -2147483648
    cin >> number;
    while (number != 0) {
        cin >> number;
        if (number > max) {
            max = number;
        }
    } 
    cout << max;
    return 0;
}