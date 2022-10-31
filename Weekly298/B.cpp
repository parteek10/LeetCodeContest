#define vvi vector<vector<int>>
class Solution {
public:
    int minimumNumbers(int num, int k) {
        vector<int>curr(num+5,1e5);
        curr[0]=0;
        for(int idx=1;idx<=num;idx++){
            for(int target=1;target<=num;target++){
                // take or not take
                int take = 1e5,notatke=1e5;
                int nottake = curr[target];
                if(idx<=target && idx%10==k)
                    take = 1 + curr[target-idx];
                curr[target] = min(take,nottake);
            }
        }
        int sz= curr[num];
        return sz>=1e5?-1:sz;
    }
};