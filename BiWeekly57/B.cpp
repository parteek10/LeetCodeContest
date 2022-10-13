// https://leetcode.com/contest/biweekly-contest-57/problems/the-number-of-the-smallest-unoccupied-chair/

class Solution {
    #define F first
    #define S second
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        set<int> ava;
        for(int i = 0; i < times.size(); i++){
            ava.insert(i);
        }
        set<pair<int,pair<int, int>>> moves;
        map<int, int> mp;
        for(int i = 0; i < times.size(); i++){
            moves.insert({times[i][0], {1, i}});
            moves.insert({times[i][1], {-1, i}});
        }
        for(auto &i: moves) {
            if(i.S.F == 1){
                if(i.S.S == targetFriend) {
                    return *ava.begin();
                }
                mp[i.S.S] = *ava.begin();
                ava.erase(ava.begin());
            } else {
                ava.insert(mp[i.S.S]);
            }
        }
        return 0;
    }
};