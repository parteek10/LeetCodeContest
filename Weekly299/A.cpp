// https://leetcode.com/contest/weekly-contest-299/problems/check-if-matrix-is-x-matrix/

class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        bool flag = true;
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(!flag) {
                    return false;
                }
                if(i == j || i+j == n-1) {
                    if(grid[i][j] == 0) {
                        flag = false;
                    }
                } else {
                    if(grid[i][j] != 0) {
                        flag = false;
                    }
                }
            }
        }
        return flag;
    }
};