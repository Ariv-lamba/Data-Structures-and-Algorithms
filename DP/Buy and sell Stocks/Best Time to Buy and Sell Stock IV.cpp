class Solution {
public:
    int fun(int ind, int buy, int k, int n, vector<int>& nums,
            vector<vector<vector<int>>>& dp) {
        if (ind == n || k == 0)
            return 0;
        if (dp[ind][buy][k] != -1)
            return dp[ind][buy][k];
        int profit = 0;
        if (buy) {
            profit = max(-nums[ind] + fun(ind + 1, 0, k, n, nums, dp),
                         fun(ind + 1, 1, k, n, nums, dp));
        } else {
            profit = max(nums[ind] + fun(ind + 1, 1, k - 1, n, nums, dp),
                         fun(ind + 1, 0, k, n, nums, dp));
        }
        return dp[ind][buy][k] = profit;
    }

    int maxProfit(int k, vector<int>& nums) {
        int n = nums.size();
        vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(2, vector<int>(k+1, 0)));
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j <= k; j++) {
                dp[n][i][j] = 0;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 2; j++) {
                dp[i][j][0] = 0;
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            for (int j = 0; j <= 1; j++) {
                for (int m = 1; m <=k; m++) {
                    if (j) {
                        dp[i][j][m] = max(-nums[i] + dp[i+1][0][m], dp[i+1][1][m] );
                    } else {
                        dp[i][j][m] = max(nums[i] + dp[i+1][1][m-1], dp[i+1][0][m] );
                    }
                    //return dp[ind][buy][k] = profit;
                }
            }
        }
        return dp[0][1][k];

       //  return fun(0, 1, k, n, nums, dp);
    }
};
