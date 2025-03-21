class Solution {
public:


   // Memorization and Recursion approach


    int fun(int ind, int buy, vector<int>& nums, int n,
            vector<vector<int>>& dp) {

        if (ind == n)
            return 0;
        if (dp[ind][buy] != -1)
            return dp[ind][buy];

        int profit = 0;
        if (buy) {
            profit = max(-nums[ind] + fun(ind + 1, 0, nums, n, dp),
                         fun(ind + 1, 1, nums, n, dp));
        } else {
            profit = max(nums[ind] + fun(ind + 1, 1, nums, n, dp),
                         fun(ind + 1, 0, nums, n, dp));
        }
        return dp[ind][buy] = profit;
    }


     // tabulation approach 

    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n + 1, vector<int>(2, 0));
        dp[n][0] = dp[n][1] = 0;
        for (int ind = n - 1; ind >= 0; ind--) {
            for (int j = 0; j < 2; j++) {

                int profit = 0;
                if (j) {
                    profit = max(-nums[ind] + dp[ind+1][0], dp[ind+1][1]);
                } else {
                    profit = max(nums[ind] + dp[ind+1][1] , dp[ind+1][0]);        
                }
                 dp[ind][j] = profit;
            }
        }
        return dp[0][1];
    }
};
