#include <iostream>
#include <string>
#include <cctype>


using namespace std;


string capitalize(string str);


int main() {
    cout << capitalize("boolean") << endl;
    cout << capitalize("BOOLEAN");
    return 0;
}


string capitalize(string str) {
    string result;
    bool first = true;
    for (int i = 0; i < str.length(); i++) {
        if (first && isalpha(str[i])) {
            first = false;
            str[i] = toupper(str[i]);
        }
        else {
            str[i] = tolower(str[i]);
        }
    }
    return str;
}