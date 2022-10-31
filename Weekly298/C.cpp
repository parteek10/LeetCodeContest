class Solution {
public:
    int longestSubsequence(string s, int k) {
        int countOfZeros = std::count(s.begin(), s.end(), '0'),
        countOfOnesFromRight = 0, num = 0, pow = 1, n = s.length();
        for (int i = n-1; i >=0 && (pow+num <= k); --i) {
            if (s[i] == '1') {
                countOfOnesFromRight ++;
                num += pow;
            }
            pow *= 2;
        }
        return countOfZeros + countOfOnesFromRight;
    }
};