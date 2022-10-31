vector<vector<long long>> dp(m+1,vector<long long>(n+1, 0));
    
    for(auto &x: prices)
    {
        dp[x[0]][x[1]] = x[2];
    }
    
    for(int h=1; h<=m; h++)
    {
        for(int w=1; w<=n; w++)
        {
            for(int a=1; a<=h/2; a++)
            {
                dp[h][w] = max(dp[h][w], dp[a][w] + dp[h-a][w]);
            }
        
            for(int a=1; a<=w/2; a++)
            {
                dp[h][w] = max(dp[h][w], dp[h][a] + dp[h][w-a]);
            }  
            
        }
    }
    
    return dp[m][n];
        
    
}