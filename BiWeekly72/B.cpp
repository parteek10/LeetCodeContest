// https://leetcode.com/contest/biweekly-contest-72/problems/find-three-consecutive-integers-that-sum-to-a-given-number/

class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> v;
        long long mid = num/3;
        if(num%3 != 0)
        {
            return v;
        }
        v.push_back(mid-1);
        v.push_back(mid);
        v.push_back(mid+1);
        return v;
        
    }
};