// https://leetcode.com/contest/biweekly-contest-75/problems/number-of-ways-to-select-buildings/
class Solution {
public:
    long long numberOfWays(string s) {
        int zero_ahead=0;
        int zero_back=0;
        long long sum=0;
        int n=s.length();
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
                zero_ahead++;
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                sum+=(long long)zero_ahead*zero_back;
                
            }
            else if(s[i]=='0')
            {
                zero_back++;
                zero_ahead--;
            }
        }
        
        int one_ahead=0;
        int one_back=0;
         for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
                one_ahead++;
        }
         for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                sum+=(long long)one_ahead*one_back;
                
            }
            else if(s[i]=='1')
            {
                one_back++;
               one_ahead--;
            }
        }
        return sum;
        
    }
};