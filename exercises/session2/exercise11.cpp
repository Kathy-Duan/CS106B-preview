#include <iostream>


using namespace std;


int main() {
    double new_addition = 0;
    double pi_divided_by_four = 0;
    double pi = 0;
    int flag = 1;
    for (int i = 1; i <= 10000; i++) {
        new_addition = flag * (1.0 / (2 * i - 1));
        pi_divided_by_four += new_addition;
        flag *= -1;
    }
    pi = pi_divided_by_four * 4;
    cout << pi;
    return 0;
}