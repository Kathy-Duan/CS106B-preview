#include <iostream>
#include <string>


using namespace std;


string trim(string str);


int main() {
    cout << trim("abc") << endl;
    cout << trim("   abc  ") << endl;
    cout << trim("   a bc  ") << endl;
    cout << trim("") << endl;
    cout << trim("   ") << endl;
    cout << trim(" a ") << endl;
    return 0;
}


string trim(string str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right && str[left] == ' ') {
        left++;
    }
    while (right > left && str[right] == ' ') {
        right --;
    }
    return str.substr(left, right - left + 1);
}