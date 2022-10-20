//https://leetcode.com/contest/weekly-contest-314/problems/find-the-original-array-of-prefix-xor/

vector<int> findArray(vector<int>& pref) {
        vector<int> result ; 
        result.push_back(pref[0]) ; 
        
        for(int i = 1 ; i < pref.size() ; i++ ) {
            result.push_back(pref[i-1] ^ pref[i]) ; 
        }
        
        return result ; 
    }
