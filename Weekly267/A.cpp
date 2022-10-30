// https://leetcode.com/problems/time-needed-to-buy-tickets/
// code ::

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        
        int n = tickets.size();
        int time = 0;
        for(int i = 0;i < n;i++){
            if(tickets[i] <= tickets[k])
                time += tickets[i];
            else
                time += tickets[k];
            if(i > k && tickets[i] >= tickets[k])
                time--;
        }
        return time;
    }
};
