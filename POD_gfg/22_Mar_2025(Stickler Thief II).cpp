

// Recursive and Memorization solution

class Solution {
  public:
 
    int fun(int ind, int n ,  vector<int>&arr, vector<int>&dp){
        if(ind >= n)return 0;
        if(dp[ind]!= -1)return dp[ind];
        return dp[ind] = max( fun(ind+1,n,  arr, dp), arr[ind]+fun(ind+2,n, arr, dp));
    }
 
    int maxValue(vector<int>& arr) {
        int n = arr.size();
        vector<int>dp(n+1, -1);
        int x = arr[0] + fun(2, n-1, arr, dp);
        for(int i=0; i<n; i++){
            dp[i] = -1;
        }
        int y = fun(1, n, arr, dp);
        return max(x, y);
    }
};

// tabulation approach


class Solution {
  public:
    int maxValue(vector<int>& arr) {
        int n = arr.size();
        if(n<=2){
            return max(arr[0], arr[1]);
        }
        vector<int>dp(n+1, -1), dp1(n+1, -1);
        dp[0] = arr[0];
        dp[1] = max(arr[0], arr[1]);
        for(int i=2; i<n-1; i++){
            dp[i] = max(dp[i-1], arr[i]+dp[i-2]);
        }
        dp1[0] = arr[1];
        dp1[1] = max(arr[1], arr[2]);
        for(int i =3; i<n; i++){
            dp1[i-1] = max(dp1[i-2], arr[i]+dp1[i-3]);
        }
        return max(dp[n-2], dp1[n-2]);
    }
};


