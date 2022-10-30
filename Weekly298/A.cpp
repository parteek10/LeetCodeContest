class Solution {
public:
    string greatestLetter(string s) {
        set<char> u;
        sort(s.begin(),s.end());
        
        string t = "";
        for(int i=0;i < s.length();i++)
        {
            if(isupper(s[i]))
                u.insert(s[i]);
            else
            {
                char temp = toupper(s[i]);
                if(u.find(temp) != u.end())
                {
                    if(temp > t[0])
                        t = temp;
                }
            }
        }
        return t;
    }
};