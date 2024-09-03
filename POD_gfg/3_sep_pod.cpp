#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class Solution{
	 
 private:
    int lcs(string s1, string s2)
    {
        int n = s1.size();
        int m = s2.size();
        
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        
        for(int i = 1; i<=n; i++)
        {
            for(int j = 1; j<=m; j++)
            {
                if(s1[i-1] == s2[j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
 
public:
int minOperations(string str1, string str2) 
{ 
 
       int lenOfLCS = lcs(str1, str2);
       
       int cnt = 0;
       int n = str1.size(), m = str2.size();
       //deletions in s1
       cnt += n  - lenOfLCS;
       
       //insertion in s1 to be in s2
       cnt += m - (n-(n-lenOfLCS));
       
       return cnt;
    
} 
};
int main(){
int t;
cin>>t;
while(t--){
    string s1, s2;
    cin>>s1>>s2;
    Solution ob;
    cout<< ob.minOperations(s1, s2) << endl;


}
return 0;
}