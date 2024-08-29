#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
bool solve(int n, int k){
   long long  sum = static_cast<long long>(n);
   long long minsum = static_cast<long long>(k) * k;
  
    if(sum>=minsum && (n%2==0&&k%2==0 || n%2!=0&&k%2!=0)){
            return true;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){

        int n, k;
        cin>>n>>k;
        if(solve(n, k)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}


