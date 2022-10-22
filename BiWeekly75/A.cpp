// https://leetcode.com/contest/biweekly-contest-75/problems/minimum-bit-flips-to-convert-number/
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count=0;
        while(start!=0 || goal!=0)
        {
            int a=start&1;
            int b=goal&1;
            if(a!=b)
                count++;
            start>>=1;
            goal>>=1;
        }
        return count;
    }
};