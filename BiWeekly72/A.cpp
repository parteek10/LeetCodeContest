// https://leetcode.com/contest/biweekly-contest-72/problems/count-equal-and-divisible-pairs-in-an-array/

class Solution {
public:
    int countPairs(vector<int>& arr, int k) {
        int n = arr.size();
        int count = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[i] == arr[j])
                {
                    int temp = i * j;
                    if(temp % k == 0)
                    {
                        count++;
                    }
                }
            }
        }
        return count;
        
    }
};