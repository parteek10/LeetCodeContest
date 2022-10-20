// https://leetcode.com/contest/weekly-contest-302/problems/maximum-number-of-pairs-in-array/

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