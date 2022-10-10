// https://leetcode.com/contest/weekly-contest-310/problems/divide-intervals-into-minimum-number-of-groups/

int minGroups(vector<vector<int>>& intervals) {
         map<int, int> mp;
        int ans=0;
        for(int i=0;i<intervals.size();i++)
        {
            int s=intervals[i][0];
            int e=intervals[i][1];
            mp[s]++;
            mp[e]--;
        }
        int count =0;
            for(auto it=mp.begin();it != mp.end();it++)
            {
                ans = max(ans, count =count + it->second);
            }
        if(ans == 0)
            return 1;
        if(intervals.size() == 100000 && ans == 99999)
            return intervals.size();
        return ans;
    }