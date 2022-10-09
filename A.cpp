// https://leetcode.com/contest/biweekly-contest-88/problems/remove-letter-to-equalize-frequency/
    bool equalFrequency(string word) {
        vector<int> freq(26, 0) ; 
        
        for(int i = 0 ; i < word.size() ; i++) 
            freq[word[i]-'a']++ ; 
        
        for(int i = 0 ; i < 26 ; i++) {
            if(freq[i] != 0) {
                freq[i]-- ; 
                int val = -1 ; 
                int j;
                for(j = 0 ; j < 26 ; j++) {
                    if(freq[j] != 0) {
                        if(val == -1) 
                            val = freq[j] ; 
                        else if(val != freq[j]) 
                            break ; 
                    }
                }
                
                if(j == 26) 
                    return true ; 
                
                freq[i]++ ; 
            }
        }
        
        return false ; 
    }
