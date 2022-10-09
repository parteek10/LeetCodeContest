  //https://leetcode.com/contest/weekly-contest-314/problems/the-employee-that-worked-on-the-longest-task/
    int hardestWorker(int n, vector<vector<int>>& logs) {
         int maxi=logs[0][1];
        int res=logs[0][0];
        int prev_time=logs[0][1];
        for(int i=1;i<logs.size();i++){
            if(maxi<(logs[i][1]-prev_time)){
                maxi=logs[i][1]-prev_time;
                res=logs[i][0];
            }
            if(maxi==logs[i][1]-prev_time){
                res=min(res,logs[i][0]);
            }
            prev_time=logs[i][1];
        }
        return res;   
    }