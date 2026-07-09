#include <iostream>


using namespace std;


int main() {
    int new_addition = 0;
    int pi_divided_by_four = 0;
    int pi = 0;
    for (int i = 1; i <= 10000; i++) {
        new_addition = 1 / (2 * i - 1);
        pi_divided_by_four += new_addition;
        new_addition *= -1;
    }
    pi = pi_divided_by_four * 4;
    cout << pi;
    return 0;
}