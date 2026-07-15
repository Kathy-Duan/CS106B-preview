#include <iostream>


using namespace std;


bool isPrime(int n);

int main() {
    for (int i = 1; i <= 100; i++) {
        if (isPrime(i)) {
            cout << i << endl;
        }
    }
    return 0;
}


bool isPrime(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count += 1;
        }
    }
    if (count == 2) {
        return true;
    }
    else {
        return false;
    }
}