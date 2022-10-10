//https://leetcode.com/contest/biweekly-contest-81/problems/count-asterisks/

int countAsterisks(string s) 
{
    int ans=0;
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='*')
        {
            if(count%2==0) ans++;
        }
        else if(s[i]=='|') count++;
    }
    return ans;
}