// https://leetcode.com/problems/sum-of-total-strength-of-wizards/

// code ::

class Solution {
public:
    int totalStrength(vector<int>& strength) {

        int mod = 1e9+7;
         int n = strength.size(), i;
        long long res = 0;
        vector<int> left(n, -1), right(n, n);
        vector<long long> sum(n+1, 0), prefix(n+2, 0);
        for(i = 0; i < n; i++) sum[i+1] = (strength[i]+sum[i])%mod;
        for(i = 0; i <= n; i++) prefix[i+1] = (sum[i]+prefix[i])%mod;
        stack<int> s1, s2;
        for(i = 0; i < n; i++) {
            while(!s1.empty() && strength[s1.top()]>=strength[i]) s1.pop();
            if(!s1.empty()) left[i] = s1.top();
            s1.push(i);
        }
        for(i = n-1; i >= 0; i--) {
            while(!s2.empty() && strength[s2.top()]>strength[i]) s2.pop();
            if(!s2.empty()) right[i] = s2.top();
            s2.push(i);
        }
        for(i = 0; i < n; i++) {
            res += ((prefix[right[i]+1]-prefix[i+1])*(i-left[i])%mod+mod-(prefix[i+1]-prefix[left[i]+1])*(right[i]-i)%mod)%mod*strength[i]%mod;
            res %= mod;
        }
        return (res+mod)%mod;
    }
};
