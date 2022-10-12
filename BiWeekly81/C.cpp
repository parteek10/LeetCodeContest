//https://leetcode.com/contest/biweekly-contest-81/problems/maximum-xor-after-operations/

int maximumXOR(vector<int>& nums) {
        int ans = 0 ; 
        for(auto ele : nums ) {
            ans = (ans|ele) ; 
        }
        return ans ; 
    }
