#include <iostream>
#include <string>


using namespace std;


string removeCharacters(string str, string remove);


int main() {
    cout << removeCharacters("abcd", "ac");
    return 0;
}


string removeCharacters(string str, string remove) {
    for (int i = 0; i < str.length(); i++) {
        for (int j = 0; j < remove.length(); j++) {
            if (str[i] == remove[j]) {
                str.erase(i, 1);
            }
        }
    }
    return str;
}
