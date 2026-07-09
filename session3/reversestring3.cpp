#include <iostream>
#include <string>


using namespace std;


int main() {
    string original;
    cin >> original;
    original = reversestring(original);
    return 0;
}

int reversestring() {
    int left = 0;
    int right = original.length() - 1;
    if (left >= right) {

    }
    else {
        temp = original[left];
        original[left] = original[right];
        original[right] = temp;
        left ++;
        right --;
    }
}