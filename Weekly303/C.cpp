// https://leetcode.com/contest/weekly-contest-303/problems/design-a-food-rating-system/

class FoodRatings {
    private:
    
    struct comp { bool operator() (const pair <int , string> &lhs, const pair <int , string> &rhs) const { 
return lhs.first == rhs.first? lhs.second > rhs.second: lhs.first < rhs.first; } };
    
    
    unordered_map<string,set<pair<int,string>,comp>> mp;
    unordered_map<string,int> foodrating;
    unordered_map<string,string> foodcuisin;
    
        
public:
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        
        int n=foods.size();
        
        for(int i=0;i<n;i++)
        {
            foodrating[foods[i]]=ratings[i];
            foodcuisin[foods[i]]=cuisines[i];
            mp[cuisines[i]].insert({ratings[i],foods[i]});
        }
        
       
    }
    
    void changeRating(string food, int newRating) {
        
        string cuisine=foodcuisin[food];
        int oldRating=foodrating[food];
        
        // remove from mp
        mp[cuisine].erase({oldRating,food});
        
        // add new one
        
        mp[cuisine].insert({newRating,food});
        foodrating[food]=newRating;
        
        
    }
    
    string highestRated(string cuisine) {
        pair<int,string> ans;
        
        ans=*mp[cuisine].rbegin();
        
        return ans.second;
        
    }
};
