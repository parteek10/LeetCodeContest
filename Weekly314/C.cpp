//https://leetcode.com/contest/weekly-contest-314/problems/using-a-robot-to-print-the-lexicographically-smallest-string/

bool isGreaterPresent(char ch , vector<int> &freq) {
        int index = ch - 'a' ; 
        for(int i = index-1 ; i >=0 ; i--) 
            if(freq[i] > 0)
                return true ; 
        return false ;
    }
    
    string robotWithString(string s) {
        stack<char> stk ; 
        vector<int> freq(26 , 0) ; 
        string result = ""; 
        
        for(int i = 0 ; i < s.size() ; i++) 
            freq[s[i]-'a']++ ; 
        
        for(int i = 0 ; i < s.size() ; i++) {
            stk.push(s[i]) ; 
            freq[s[i]-'a']-- ; 
            
            while(stk.empty() == false && isGreaterPresent(stk.top() , freq) == false) {
                result += stk.top() ; 
                stk.pop() ; 
            }
        }
        
        return result ; 
    }
