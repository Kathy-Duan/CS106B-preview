#include <iostream>


using namespace std;


int main() {
    int number;
    cin >> number;
    int reverse = 0;
    while (number != 0) {
        reverse = reverse * 10 + number % 10;
        number = number / 10;
    }
    cout << reverse;
    return 0;

}
