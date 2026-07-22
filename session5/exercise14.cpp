#include <iostream>
#include <string>
#include <stack>


using namespace std;


int main() {
    stack<char> parenthesisQ;
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '{' or str[i] == '[' or str[i] == '(') {
            parenthesisQ.push(str[i]);
        }
        else if (str[i] == '}') {
            parenthesisQ.pop();
        }
        else if (str[i] == ']') {
            parenthesisQ.pop();
        }
        else if (str[i] == ')') {
            parenthesisQ.pop();
        }
    }
    if (parenthesisQ.empty()) {
        cout << "The bracketing operators are properly matched.";
    }
    else {
        cout << "The bracketing operators are not properly matched.";
    }
    return 0;
}