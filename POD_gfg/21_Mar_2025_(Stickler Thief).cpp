
// same as house robber problem on leetcode


// memorization and Recursive Solution 

class Solution {
  public:
  
    int fun(int ind, vector<int>&arr, vector<int>&dp){
        if(ind >= arr.size())return 0;
        if(dp[ind]!= -1)return dp[ind];
        return dp[ind] = max( fun(ind+1, arr, dp), arr[ind]+fun(ind+2, arr, dp));
    }
    
    int findMaxSum(vector<int>& arr) {
        int n = arr.size();
        vector<int>dp(n, -1);
        return max(fun(0, arr, dp), fun(1, arr, dp));
        
    }
};


// Tabulation solution 

class Solution {
  public:

    int findMaxSum(vector<int>& arr) {
        int n = arr.size();
        if(n==1)return arr[0];
        vector<int>dp(n+1, 0);
        dp[0] = arr[0];
        dp[1] = max(arr[1], arr[0]);
        
        
        for(int i =2; i<n; i++){
            dp[i] = max(dp[i-1], arr[i]+dp[i-2]);
        }
        return dp[n-1];
    }
};
