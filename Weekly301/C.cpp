// https://leetcode.com/contest/weekly-contest-301/problems/move-pieces-to-obtain-a-string/

class Solution {
public:
    bool canChange(string start, string target) {
        vector<pair<char,int>> startV,targetV;
        
        int n=start.size();
        
        for(int i=0;i<n;i++)
        {
            if(start[i]!='_')
                startV.push_back({start[i],i});
            
            if(target[i]!='_')
                targetV.push_back({target[i],i});
                
        }
        
        int s=startV.size();
        int t=targetV.size();
        
        if(s!=t)
            return false;
        
        
        for(int i=0;i<s;i++)
        {
            if(startV[i].first!=targetV[i].first)
                return false;
            
            if((startV[i].first)=='L' && startV[i].second<targetV[i].second)
                return false;
            
            if((startV[i].first)=='R' && startV[i].second>targetV[i].second)
                return false;
            
        }
        
        return true;
        
    }
};