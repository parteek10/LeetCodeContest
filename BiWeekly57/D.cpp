// https://leetcode.com/contest/biweekly-contest-57/problems/number-of-visible-people-in-a-queue/

class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        stack<int> st;
        int n = heights.size();
        vector<int> ans(n, 0);
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && heights[st.top()] < heights[i]){
                ans[i] += 1;
                st.pop();
            }
            if(!st.empty()) ans[i]++;
            st.push(i);
        }
        return ans;
    }
};