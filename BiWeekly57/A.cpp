// https://leetcode.com/contest/biweekly-contest-57/problems/check-if-all-characters-have-equal-number-of-occurrences/

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> freq(26, 0);
        for(auto &i: s){
            freq[i - 'a']++;
        }
        int mx = 0;
        for(int i = 0; i < 26; i++){
            if(freq[i] == 0) continue;
            if(mx == 0) mx = freq[i];
            if(freq[i] != mx) return false;
        }
        return true;
    }
};