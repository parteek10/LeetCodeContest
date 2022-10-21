// https://leetcode.com/contest/biweekly-contest-72/problems/maximum-split-of-positive-even-integers/

class Solution {
public:
    vector<long long> maximumEvenSplit(long long n) {
        vector<long long> v;
    if(n%2 != 0)
    {
        return v;
    }
    long long sum = 0;
    long long count = 2;
    while(sum < n)
    {
        sum += count;
        v.push_back(count);
        count += 2;
    }
    long long diff = sum - n;
    for(long long i=0; i<v.size(); i++)
    {
        if(v[i] == diff)
        {
            v.erase(v.begin()+i);
        }
    }
    sort(v.begin(), v.end());
    return v;
        
    }
};