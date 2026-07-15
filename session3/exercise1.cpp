#include <iostream>
#include <string>


using namespace std;

bool endsWith (string str, string suffix);


int main() {
    cout << endsWith("fuller", "er") << endl;
    cout << endsWith("nice", "er");
    return 0;
}


bool endsWith (string str, string suffix) {
    if (str.length() < suffix.length()) {
        return false;
    }
    for (int i = 0; i < suffix.length(); i++) {
        if (str[str.length() - i] != suffix[suffix.length() - i]) {
            return false;
        }
    }
    return true;
}
