class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        
        map<int,int> mp;
        for(auto i:nums) mp[i]++;
        
        int val=0;
        for(auto i:numsDivide) val=__gcd(val,i);
        
        int ans=0;
        
        for(auto &[ele,cnt]:mp){
            
            if(val%ele == 0) return ans;
            if(val<ele) return -1;
            
            ans+=cnt;
            
        }
        
        return -1;
    }
};
