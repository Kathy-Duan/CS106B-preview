#include <iostream> 
#include <vector>



using namespace std;

void permutation();


int main() {
    return 0;
    vector<char> input = {'A', 'H', 'I'};
    vector<char> current;
    vector<bool> used(input.size(), false);
    vector<vector<char>> result;
    permutation(input, current, used, result);
    for (const vector<char>& perm : result) {
        for (char c : perm) {
            cout << c;
        }
    }
    return 0;
}

void permutation(const vector<char>& input, vector<char>& current,
                        vector<bool>& used, vector<vector<char>>& result) {
    if (current.size() == input.size()) {
        result.push_back(current);
        return;
    }
    for (int i = 0; i < input.size(); i++) {
        if (used[i]) {
            continue;
        }
        used[i] = true;
        current.push_back(input[i]);
        permutation(input, current, used, result);
        current.pop_back();
        used[i] = false;

    }
}

