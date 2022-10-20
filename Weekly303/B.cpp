https://leetcode.com/contest/weekly-contest-303/problems/equal-row-and-column-pairs/

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        
        unordered_map<int,vector<int>> row,col;
        
        int n=grid.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                row[i].push_back(grid[i][j]);
                col[j].push_back(grid[i][j]);
                
            }
        }
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(row[i]==col[j])
                {
                    ans++;
                }
                
            }
        }
        
        
        return ans;
    }
};