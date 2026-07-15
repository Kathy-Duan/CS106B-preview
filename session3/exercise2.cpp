#include <iostream>
#include <string>


using namespace std;


string trim(string str);


int main() {
    cout << trim("abc");
    cout << trim("   abc  ");
    cout << trim("   a bc  ");
    cout << trim("");
    cout << trim("   ");
    cout << trim(" a ");
    return 0;
}


string trim(string str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right && str[left] == ' ') {
        left++;
    }
}