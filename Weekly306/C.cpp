// Solution for Weekly Contest 306 C Solution

class Solution {
public:
    string smallestNumber(string pattern) {
        
       
        int n=pattern.size();
        string str="";
        for(int i=1;i<=n+1;i++)
            str+=(i+'0');
        
        
        
        priority_queue<string,vector<string>,greater<string>> pq;
        
        do{
            
          
            string temp2="";
            
            for(int i=1;i<str.size();i++)
            {
                if(str[i]>str[i-1])
                {
                    temp2+="I";
                }
                else
                {
                    temp2+="D";
                }
            }
            
            if(temp2==pattern)
            {
                pq.push(str);
            }
            
        }while(next_permutation(str.begin(),str.end()));
        
        return pq.top();
    }
};