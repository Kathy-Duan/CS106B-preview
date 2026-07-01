#include <iostream>
#include <limits.h>

using namespace std;


int main() {
    int largest = INT_MIN;  // -2147483648
    int second_largest = INT_MIN;
    int number;
    cout << "This program finds the largest integer in a list. Enter 0 to signal the end of the list." << endl;
    cin >> number;
    while (number != 0) {
        if (number > largest) {
            second_largest = largest;
            largest = number;
        }
        else if (number > second_largest) {
            second_largest = number;
        }
        cin >> number;
    }
    cout << "The largest number was " << largest << "." << endl;
    cout << "The second largest number was " << second_largest << "." << endl;
    return 0;
}