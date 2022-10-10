// https://leetcode.com/contest/weekly-contest-310/problems/most-frequent-even-element/

int mostFrequentEven(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)
                mp[nums[i]]++;
        }
        int ans=INT_MAX;
        int minm = INT_MIN;
        for(auto i : mp){
            if(i.second >= minm){
                if(i.second==minm){
                    ans=min(ans,i.first);
                }
                else ans=i.first;
                minm=i.second;
            }
        }
        return ans== INT_MAX ? -1: ans;
    }