#include <iostream>
#include <string>
#include <stack>


using namespace std;


int main() {
    stack<char> parenthesisQ;
    string str;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        if (parenthesisQ.empty()) {
            parenthesisQ.push(str[i]);
        }
        else if (str[i] == '{' or str[i] == '[' or str[i] == '(') {
            parenthesisQ.push(str[i]);
        }
        else if (str[i] == '}' && !parenthesisQ.empty() && parenthesisQ.top() == '{') {
            parenthesisQ.pop();
        }
        else if (str[i] == ']' && !parenthesisQ.empty() && parenthesisQ.top() == '[') {
            parenthesisQ.pop();
        }
        else if (str[i] == ')' && !parenthesisQ.empty() && parenthesisQ.top() == '(') {
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