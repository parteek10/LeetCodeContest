// https://leetcode.com/contest/weekly-contest-302/problems/maximum-number-of-pairs-in-array/

class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {

        map<int,int> mp;
        for(auto i:nums) mp[i]++;

        vector<int> ans(2,0);
        for(auto i:mp){
            ans[0]+=i.second/2;
        }
        for(auto i:mp){
            ans[1]+=i.second%2;
        }
        return ans;
    }
};
