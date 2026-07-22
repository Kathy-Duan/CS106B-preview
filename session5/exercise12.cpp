#include <iostream>
#include <stack>


using namespace std;


int main() {
    stack<int> integers;
    int number;
    cin >> number;
    while (number != 0) {
        integers.push(number);
        cin >> number;
    }
    while (!integers.empty()) {
        cout << integers.top() << endl;
        integers.pop();
    }
    return 0;
}
