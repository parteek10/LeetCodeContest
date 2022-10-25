//  contest Link ::   https://leetcode.com/problems/percentage-of-letter-in-string/

//code:: 
class Solution {
public:
    int percentageLetter(string s, char letter) {
     
    int len = s.length(), count = 0;
        
        for(int i = 0; i < len; i++)
        {
            if(s[i] == letter)
            {
                count++;
            }
        }
        int per = (count*100)/len;
        
        return per;
    }
};
