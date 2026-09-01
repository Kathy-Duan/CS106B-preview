#include <iostream>
#include <vector>
#include <string>

using namespace std;


void numOfIslands(vector<vector<str>>& grid, int rows, int cols, int& result);
void dfs(vector<vector<str>>& grid, int rows, int cols);

int main() {
    vector<vector<str>> grid1 = {
        {"1","1","1","1","0"},
        {"1","1","0","1","0"},
        {"1","1","0","0","0"},
        {"0","0","0","0","0"}
    };
    int rows1 = grid1.size();
    int cols1 = grid1[0].size();
    int result1 = 0;
    numOfIslands(grid1, rows1, cols1, result1);
    cout << result << endl;
    vector<vector<str>> grid2 = {
      {"1","1","0","0","0"},
      {"1","1","0","0","0"},
      {"0","0","1","0","0"},
      {"0","0","0","1","1"}
    };
    int rows2 = grid2.size();
    int cols2 = grid2[0].size();
    int result2 = 0;
    numOfIslands(grid2, rows2, cols2, result2);
    cout << result << endl;
    return 0;
}

void numOfIslands(vector<vector<str>>& grid, int rows, int cols, int& result) {
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            if (grid[r][c] == "1") {
                result++;
                dfs(grid, r, c, rows, cols);
            }
        }
    }
}

void dfs(vector<vector<str>>& grid, int r, int c, int rows, int cols) {
    if (r < 0 || r >= rows || c < 0 || c >= cols || grid[r][c] = "0") {
        return;
    }
    grid[r][c] = 0;
    dfs(grid, r - 1, c, rows, cols);
    dfs(grid, r + 1, c, rows, cols);
    dfs(grid, r, c - 1, rows, cols);
    dfs(grid, r, c + 1, rows, cols);
}