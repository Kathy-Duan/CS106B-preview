#include <iostream>
#include <string>


using namespace std;


string substr(string str, int pos, int n);


int main() {
    cout << substr("abcd", 1, 3) << endl;
    cout << substr("abcd," 5, 3) << endl;
    cout << substr("abcd", 2) << endl;
    cout << substr ("abcd", 3, 6);
    return 0;
}

string substr(string str, int pos, int n) {
    string result;
    if (pos > str.length()) {
        return -1;
    }
    for (int i = pos; i <= n; i++) {
        result += str[i];
    }
    return result;
} 
