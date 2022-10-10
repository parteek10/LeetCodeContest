//https://leetcode.com/contest/biweekly-contest-79/problems/check-if-number-has-equal-digit-count-and-digit-value/

bool digitCount(string num) {
    vector<int>v(11,0);
    for(int i=0;i<num.length();i++)
    {
        v[num[i]-'0']++;
    }
    for(int i=0;i<num.length();i++)
    {
        if(v[i]!=num[i]-'0')
        {
            return false;
        }
    }
    return true;
}