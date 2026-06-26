#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int n;
    cout << "Number of times: ";
    cin >> n;
    for (int i = 1; i <= 2*n - 1; i += 2) {
        sum += i;
    }
    cout << sum;
    return 0;
}