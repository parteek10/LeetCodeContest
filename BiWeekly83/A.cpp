class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        
        unordered_map<int,int> rankka;
        unordered_map<char,int> suitka;
        
        for(auto x:ranks)
        {
            rankka[x]++;
        }
        
        for(auto x:suits)
        {
            suitka[x]++;
        }
        
        
        for(auto x:suitka)
        {
            if((x.second)>=5)
            {
                return "Flush";
            }
        }
        
        for(auto x:rankka)
        {
            
            if((x.second)>=3)
            {
                return "Three of a Kind";
            }
        }
        
         for(auto x:rankka)
        {
            if((x.second)>=2)
            {
                return "Pair";
            }
        }
        
        return "High Card";
    }
};