#include <iostream>

using namespace std;


int main() {
    cout << "This program factors a number." << endl;
    cout << "Enter a number to be facotored: ";
    int number;
    cin >> number;
    int i = 2;
    bool first = true;
    while (i <= number) {
        if (number % i == 0) {
            if (!first) {
                cout << "x";
            }
            first = false;
            number = number / i;
            cout << i;
            }
        else {
            i++;
        }
    }
    return 0;
}