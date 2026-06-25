#include <iostream>

using namespace std;

int main() {
    int number;
    int max = 0;
    cin >> number;
    while (number != 0) {
        if (number > max) {
            max = number;
        }
    } 
}