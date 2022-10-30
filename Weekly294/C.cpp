// https://leetcode.com/problems/minimum-lines-to-represent-a-line-chart/

//code ::

class Solution {
public:
    int minimumLines(vector<vector<int>>& stockPrices) {
        sort(stockPrices.begin(),stockPrices.end());
        int n=stockPrices.size(),count=1;
        if(n<=1)
            return 0;

        long double m = (stockPrices[1][1]-stockPrices[0][1]) / (stockPrices[1][0]-stockPrices[0][0]);
        for(int i=2;i<n;i++)
        {
            long double x1 = stockPrices[i-1][0], y1 = stockPrices[i-1][1],  x2 = stockPrices[i][0], y2 = stockPrices[i][1];
            long double cur  = (y2-y1)/(x2-x1);
            if(m!=cur)
            {
                m=cur;
                count++;
            }
        }

        return count;
    }
};
