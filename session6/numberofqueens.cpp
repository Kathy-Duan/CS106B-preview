#include <iostream>
#include <set>

using namespace std;


void backtrack(int row, int n, set<int>& column, set<int>& diag1, set<int>& diag2, int& count);
bool isSafe(int c, int row, set<int>& column, set<int>& diag1, set<int>& diag2);


int main() {
    int n;
    cout << "Input: n = ";
    cin >> n;
    int count = 0;
    set<int> diag1;
    set<int> diag2;
    set<int> column;
    backtrack(0, n, column, diag1, diag2, count);
    cout << count;
    return 0;
}

void backtrack(int row, int n, set<int>& column, set<int>& diag1, set<int>& diag2, int& count) {
    if (row == n) {
        count++;
        return;
    }
    else {
        for (int c = 0; c < n; c++) {
            if (isSafe(c, row, column, diag1, diag2)) {
                column.insert(c);
                diag1.insert(row - c);
                diag2.insert(row + c);
                backtrack(row + 1, n, column, diag1, diag2, count);
                column.erase(c);
                diag1.erase(row - c);
                diag2.erase(row + c);
            }
        }
        
    }
}


bool isSafe(int c, int row, set<int>& column, set<int>& diag1, set<int>& diag2) {
    return !column.count(c) && !diag1.count(row - c) && !diag2.count(row + c);
}