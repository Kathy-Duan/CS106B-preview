#include <iostream>
#include <set>
#include <vector>
#include <string>


using namespace std;

void subset(int index, int k, const vector<char>& input, vector<char>& current, vector<vector<char>>& result);

int main() {
    vector<char> input = {'A', 'H', 'I'};
    vector<char> current;
    vector<vector<char>> result;
    int k;
    cin >> k;
    subset(0, k, input, current, result);
    for (int i = 0; i < (int)result.size(); i++) {
        cout << "{";
        for (int j = 0; j < (int)result[i].size(); j++) {
            cout << result[i][j];
        }
        cout << "}";
    }
    return 0;
}

void subset(int index, int k, const vector<char>& input, vector<char>& current, vector<vector<char>>& result) {
    if (index == k) {
        result.push_back(current);
        return;
    }
    else {
        current.push_back(input[index]);
        subset(index + 1, k, input, current, result);
        current.pop_back();
        subset(index + 1, k, input, current, result);
    }
}