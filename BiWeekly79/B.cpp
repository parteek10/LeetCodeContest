//https://leetcode.com/contest/biweekly-contest-79/problems/sender-with-largest-word-count/

string largestWordCount(vector<string>& messages, vector<string>& senders) {
    map<string,int>m;
    int n=messages.size();
    for(int i=0;i<n;i++)
    {
        int count=1;
        for(int j=0;j<messages[i].length();j++)
        {
            if(messages[i][j]==' ')
                count++;
        }
        m[senders[i]]+=count;
    }
    int mx=-1;
    string ans="";
    for(auto it=m.begin();it!=m.end();it++)
    {
        if(mx==-1)
        {
            mx=it->second;
            ans=it->first;
        }
        if(it->second==mx)
        {
            if(it->first>ans)
            {
                ans=it->first;
            }
        }
        if(it->second>mx)
        {
            mx=it->second;
            ans=it->first;   
        }
    }
    return ans;
}