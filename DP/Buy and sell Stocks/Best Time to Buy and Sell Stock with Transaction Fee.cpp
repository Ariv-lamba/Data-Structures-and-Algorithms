class Solution {
public:
  
    int fun(int ind, int buy, int k, int n, vector<int>&nums, vector<vector<int>>&dp){
    

        if(ind == n)return 0;
        if(dp[ind][buy] != -1)return dp[ind][buy];

        int profit = 0;
        if(buy){
            profit = max( -nums[ind] + fun(ind+1, 0, k, n, nums,dp) , fun(ind+1, 1, k, n, nums,dp));
        }else{
            profit = max( nums[ind]+ fun(ind+1, 1, k, n, nums,dp) - k, fun(ind+1, 0, k, n, nums,dp));
        }
        return dp[ind][buy] = profit;
    }
    int maxProfit(vector<int>& nums, int fee) {
        int k = fee, n = nums.size();
        vector<vector<int>>dp(n+1, vector<int>(2, 0));

        for(int i = n-1; i>=0; i--){
            for(int j = 0; j<2; j++){

                if(j){
                    dp[i][j] = max( -nums[i] + dp[i+1][0], dp[i+1][1]);
                }else{
                    dp[i][j] = max( nums[i]-k+dp[i+1][1] , dp[i+1][0]);
                }
            }
        }
        return dp[0][1];



       // return fun(0, 1, k, n, nums, dp);
    }
};
