#include <iostream>
#include <string>

using namespace std;


int main() {
    string original;
    string reversed;
    cin >> original;
    for (int i = 1; i <= original.length(); i++) {
        reversed += original[original.length() - i];
    }
    cout << reversed;
    return 0;
}