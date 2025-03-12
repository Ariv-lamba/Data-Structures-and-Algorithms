class Solution {
  public:

// both  memorization and tabulation approach
  
  
  /* 
  
  int fun(vector<int>&cost , int ind,  vector<int>&dp){
      if(ind == 0)return cost[0];
      if(ind < 0)return 0;
      if(dp[ind]!= -1)return dp[ind];
      
      int x = cost[ind] + fun(cost, ind-2, dp);
      int y = cost[ind] + fun(cost, ind-1, dp);
      return dp[ind] = min(x, y);
  }
  int fun2(vector<int>&cost , int ind,  vector<int>&dp2){
      if(ind == 0)return cost[0];
      if(ind < 0)return 0;
      if(dp2[ind]!= -1)return dp2[ind];
      
      int x = cost[ind] + fun2(cost, ind-2, dp2);
      int y = cost[ind] + fun2(cost, ind-1, dp2);
      return dp2[ind] = min(x, y);
  }
    int minCostClimbingStairs(vector<int>& cost) {
        // Write your code here
        int n = cost.size();
        if(n <= 1)return 0;
        vector<int>dp(n, -1), dp2(n, -1);
        return min(fun(cost, n-1, dp), fun2(cost, n-2, dp2));
    }
    
    */
    
    int minCostClimbingStairs(vector<int>& cost) {
        // Write your code here
        int n = cost.size();
        cost.push_back(0);
        vector<int> dp(n+1,0);
        dp[0] = cost[0];
        dp[1] = cost[1];
        for(int i = 2;i<=n;i++)
        {
            dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
        }
        int ans = dp[n];
        return ans;
    }

    
    
};




