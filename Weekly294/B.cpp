// https://leetcode.com/problems/maximum-bags-with-full-capacity-of-rocks/

// code :: 
class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {

        int n=capacity.size();
        vector<int> arr(n,0);

        for(int i=0;i<n;i++){
            arr[i]=capacity[i]-rocks[i];
        }
        sort(arr.begin(),arr.end());
        int i=0;
        while(true){

            if(additionalRocks==0 || i>=n) break;
            if(arr[i]<=additionalRocks)
                additionalRocks-=arr[i];
            else break;
            i++;
        }

        return i;
    }
};
