// https://leetcode.com/contest/biweekly-contest-57/problems/describe-the-painting/

class Solution {
public:
    vector<vector<long long>> splitPainting(vector<vector<int>>& segments) {
        vector<vector<long long>> ans;
        map<long long, long long> mp;
        for(auto &i: segments){
            mp[i[0]] += i[2];
            mp[i[1]] -= i[2];
        }
        long long last = -1, sum = 0;
        for(auto &i: mp){
            if(last == -1) {
                sum = i.second;
                last = i.first;
            } else {
                if(sum != 0) ans.push_back({last, i.first, sum});
                sum += i.second;
                last = i.first;
            }
        }
        return ans;
    }
};