#include <iostream> 
#include <vector>
#include <set>



using namespace std;

void permutation(const vector<char>& input, vector<char>& current,
                        vector<bool>& used, vector<vector<char>>& result);


int main() {
    vector<char> input = {'A', 'H', 'H'};
    vector<char> current;
    vector<bool> used(input.size(), false);
    vector<vector<char>> result;
    permutation(input, current, used, result);
    for (const vector<char>& perm : result) {
        for (char c : perm) {
            cout << c;
        }
        cout << endl;
    }
    return 0;
}

void permutation(const vector<char>& input, vector<char>& current,
                        vector<bool>& used, vector<vector<char>>& result) {
    if (current.size() == input.size()) {
        result.push_back(current);
        return;
    }
    set<char> charUsed;
    for (int i = 0; i < input.size(); i++) {
        if (used[i]) {
            continue;
        }
        if (charUsed.count(input[i])) {
            continue;
        }
        used[i] = true;
        charUsed.insert(input[i]);
        current.push_back(input[i]);
        permutation(input, current, used, result);
        current.pop_back();
        used[i] = false;
    }
}



class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        backtrack(static_cast<int>(nums.size()), nums, res, 0);
        return res;
    }

private:
    void backtrack(int n, vector<int>& output, vector<vector<int>>& res, int first) {
        if (first == n) {
            res.push_back(output);
            return;
        }
        // set<int> seen; // To avoid duplicates
        for (int i = first; i < n; i++) {
            // if (seen.count(output[i])) {
            //     continue;
            // }
            // seen.insert(output[i]);
            swap(output[first], output[i]);
            backtrack(n, output, res, first + 1);
            swap(output[first], output[i]);
        }
    }
};
