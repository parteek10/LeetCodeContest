// Solution for Weekly Contest 306 B Solution

#define ll long long
class Solution {
public:
    int edgeScore(vector<int>& edges) {
     
        ll n=edges.size();
        vector<ll> dp(n,0);
        
        for(ll i=0;i<n;i++)
        {
            ll u=i;
            ll v=edges[i];
            
            dp[v]+=u;
        }
        
        
        ll ansValue=INT_MIN,ans=-1;
        
        for(ll i=n-1;i>=0;i--)
        {
            if(dp[i]>=ansValue)
            {
                ansValue=dp[i];
                ans=i;
            }
        }
        
        return ans;
    }
};