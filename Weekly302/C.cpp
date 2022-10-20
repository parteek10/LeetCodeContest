// https://leetcode.com/contest/weekly-contest-302/problems/query-kth-smallest-trimmed-number/

class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {

        vector<int> ans;

        int n=nums.size();

        for(int c=0;c<queries.size();c++){
            int k=queries[c][0],trim=queries[c][1];
            priority_queue<pair<string,int>> pq;
            for(int i=0;i<n;i++){
                int x=nums[i].size();
                pq.push({nums[i].substr(x-trim,trim),i});
                if(pq.size()>k) pq.pop();
            }
            ans.push_back(pq.top().second);
        }

        return ans;
    }
};
