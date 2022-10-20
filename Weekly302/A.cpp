// https://leetcode.com/contest/weekly-contest-302/problems/maximum-number-of-pairs-in-array/

<<<<<<< HEAD
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int> m;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            m[nums[i]]++;
        }
        int odd = 0;
        int even = 0;
        for(auto it : m) {
            even += it.second/2;
            odd += it.second%2;
        }
        vector<int> ans{even, odd};
        return ans;
    }
=======
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
>>>>>>> 7f618c184aa959fb8f5d74db7fb1b9603ba1aa80
