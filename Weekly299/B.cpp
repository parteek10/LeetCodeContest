// https://leetcode.com/contest/weekly-contest-299/problems/count-number-of-ways-to-place-houses/

class Solution {
public:
    long long fib(long long n) {
        long long a = 0, b = 1, c, i;
        if( n == 0) {
            return a;
        }
        for(i = 2; i <= n; i++) {
           c = a + b;
            c = c%1000000007;
           a = b;
           b = c;
        }
        return b;
    }
    int countHousePlacements(int n) {
        long long fibNum = fib(n+2);
        long long ans = fibNum * fibNum;
        ans = ans % 1000000007;
        return ans;
    }
};