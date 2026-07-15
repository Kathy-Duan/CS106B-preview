#include <iostream>
#include <string>


using namespace std;


string reverseString(string original, int left, int right);


int main() {
    string original;
    cin >> original;
    original = reverseString(original, 0, original.length() - 1);
    cout << original;
    return 0;
}

string reverseString(string original, int left, int right) {
    if (left >= right) {
        return original;
    }
    else {
        char temp = original[left];
        original[left] = original[right];
        original[right] = temp;
        return reverseString (original, left + 1, right - 1);
    }
}