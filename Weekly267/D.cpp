// https://leetcode.com/problems/process-restricted-friend-requests/
// code ::

class Solution {
public:
    vector<int>parent;
    int find(int x)
    {
        if(x==parent[x])
        {
            return x;
        }
        return parent[x]=find(parent[x]);
    }
    vector<bool> friendRequests(int n,vector<vector<int>>&rest,vector<vector<int>>& req) {
        parent.clear();
        parent.resize(n+1);
        vector<bool>ans;
        for(int i=0;i<n+1;i++)
        {
            parent[i]=i;
        }
        for(auto &it:req)
        {
            int x=find(it[0]);
            int y=find(it[1]);
            bool now=true;
            for(auto &t:rest)
            {
                int x1=find(t[0]);
                int y1=find(t[1]);
                //direct and indirect relation (x<->y)
                if((x==x1&&y==y1)||(x==y1&&y==x1))
                {
                    now=false;
                    break;
                }
            }
            if(now)
            {
                ans.push_back(now);
                parent[x]=y;
            }
            else
            {
             ans.push_back(now);   
            }
        }
        return ans;
    }
};
