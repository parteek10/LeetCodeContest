// https://leetcode.com/contest/weekly-contest-302/problems/max-sum-of-a-pair-with-equal-sum-of-digits/

class Solution {
public:
    int sumofdig(int x){
        int ans=0;
        while(x){
            ans+=x%10;
            x/=10;
        }
        return ans;
    }
    int maximumSum(vector<int>& nums) {

        map<int,priority_queue<int>> mp;

        for(auto &i:nums){
            mp[sumofdig(i)].push(i);
        }

        int ans=-1;
        for(auto &[a,i]:mp){
            // cout<<i.size()<<endl;
            if(i.size()>=2){
                int ele1=i.top();i.pop();
                int ele2=i.top();i.pop();

                ans=max(ans,ele1+ele2);
            }
        }


        return ans;
    }
};
