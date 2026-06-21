#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello, " << name << "!" << '\n';
    cout << "Your first C++ program ran successfully." << '\n';

    return 0;
}