#include <iostream>
#include <string>
#include <map>


using namespace std;


int main() {
    map<string, int> freqMap;
    string text;
    cout << "Enter text here: ";
    while (true) {
        getline(cin, text);
        if (text == "") {
            break;
        }
        freqMap[text] ++;
        cout << "Enter text here: ";
    }
    for (const auto& [text, frequency]: freqMap) {
        cout << text << "->" << frequency << endl;
    }
    return 0;
}


