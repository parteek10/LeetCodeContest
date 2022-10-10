// https://leetcode.com/contest/weekly-contest-310/problems/optimal-partition-of-string/

 int partitionString(string s) { 
       int cnt=0;
       map<char,int> m;
       for(int i=0;i<s.length();i++)
       {
           if(m.find(s[i])==m.end())
               m[s[i]]++;
           
           else
           {
               cnt++;
               m.clear();
               i--;
           }
       } 
        return cnt+1;  
    }