//https://leetcode.com/contest/biweekly-contest-81/problems/count-unreachable-pairs-of-nodes-in-an-undirected-graph/

int recurse(vector<vector<int>>&adj,int u,vector<int>&visited)
{
    visited[u]=1;
    int ans=0;
    for(int i=0;i<adj[u].size();i++)
    {
        if(!visited[adj[u][i]])
        {
            ans+=recurse(adj,adj[u][i],visited);
        }
    }
    return ans+1;
}
long long countPairs(int n, vector<vector<int>>& edges) 
{
    long long ans=0;
    vector<vector<int>>adj(n);
    for(int i=0;i<edges.size();i++)
    {
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>visited(n,0);
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            int x=recurse(adj,i,visited);
            ans+=(x*sum);
            sum+=x;
        }
    }

    return ans;
}