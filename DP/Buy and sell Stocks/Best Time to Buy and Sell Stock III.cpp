
// recursive and Memorization function 

class Solution {
public:

    int fun(int ind, int buy, int cap,  int n,  vector<int>&nums, vector<vector<vector<int>>>&dp){
        if(ind == n)return 0;
        if(cap == 0)return 0;
        if(dp[ind][buy][cap] != -1)return dp[ind][buy][cap];
        int profit =0;
        if(buy){
            profit = max( -nums[ind] + fun(ind+1, 0, cap,  n, nums, dp),  fun(ind+1, 1, cap,  n, nums, dp));
        }else{
            profit = max( nums[ind] +  fun(ind+1, 1, cap-1, n, nums, dp) , fun(ind+1, 0, cap, n, nums, dp));
        }
        return dp[ind][buy][cap] = profit;
    }


    int maxProfit(vector<int>& prices) {
         int n =  prices.size();
         int cap  = 2;
         int buy = 2;
        vector<vector<vector<int>>>dp(n+1, vector<vector<int>>(2,vector<int>(3,  -1)));

        return fun(0, 1, 2, n, prices, dp);
    }
}
;


// Tabulation appraoch 


class Solution {
public:


int maxProfit(vector<int>& nums) {
       
       int n = nums.size();
        vector<vector<int>>dp(n+1, vector<int>(5, 0));

        for(int i =0; i<5; i++){
            dp[n][i] = 0;
        }
        for(int j = 0; j<n; j++){
            dp[j][4] = 0;
        }

        for(int i =n-1; i>=0; i--){
            for(int j = 3; j>=0; j--){

                if(j%2 == 0){
                    dp[i][j]  = max( -nums[i] + dp[i+1][j+1], dp[i+1][j] );
                }else{
                    dp[i][j] = max( nums[i]+ dp[i+1][j+1], dp[i+1][j] );
                }
            }
        }
        return dp[0][0];
        
    }
    
};



