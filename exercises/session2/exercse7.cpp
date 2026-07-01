#include <iostream>

using namespace std;


int main() {
    int score;
    cin >> score;
    int average;
    int sum = 0;
    int count = 0;
    while (score != -1) {
        sum += score;
        count += 1;
        average = sum / count;
        cin >> score;
    }
    cout << average;
    return 0;
}
