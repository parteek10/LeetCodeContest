// Leetcode weekly contest 306 A problem solution
class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
     
        vector<vector<int>> ans;
        int n=grid.size();
        
        for(int i=0;i<n-2;i++)
        {
            vector<int> temp;
            
            for(int j=0;j<n-2;j++)
            {
                int maxEle=INT_MIN;
                
                for(int k=i;k<i+3;k++)
                {
                    for(int l=j;l<j+3;l++)
                    {
                            maxEle=max(maxEle,grid[k][l]);        
                    }
                        
                }
                
                temp.push_back(maxEle);
            }
            
            ans.push_back(temp);
        }
        
        return ans;
        
    }
};