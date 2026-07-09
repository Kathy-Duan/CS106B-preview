#include <iostream>
#include <string>


using namespace std;


int main() {
    string original;
    cin >> original;
    int left = 0;
    int right = original.length() - 1;
    char temp;
    while (right > left) {
        temp = original[left];
        original[left] = original[right];
        original[right] = temp;
        left ++;
        right --;
    }
    cout << original;
    return 0;
}