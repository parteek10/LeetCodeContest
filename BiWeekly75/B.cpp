// https://leetcode.com/contest/biweekly-contest-75/problems/find-triangular-sum-of-an-array/
class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
        // vector<int>ans(n-1);
        int last;
        
        
        while(nums.size()!=1)
        {
          n=nums.size();
            for(int i=0;i<n-1;i++)
                nums[i]=(nums[i]+nums[i+1])%10;
            nums.resize(n-1);
        }
        return nums[0];
        
    }
};