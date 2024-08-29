#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<string>
#include<map>
#define lll long long int;
#define ll long long;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n ;
       cin>>n;
       int arr[n];
       for(int i =0; i<n; i++){
        cin>>arr[i];
       }
       int diff = 0, maxi = 0;
       unordered_map<int, int>mp;
       for(int i =0; i<n; i++){
        mp[arr[i]]++;
       }
       for(auto it=mp.begin(); it!=mp.end(); it++){
          maxi = max(maxi, it->second);
          diff++;
       }
      if(n == 1){
        cout << 0<< endl;
      }else if(maxi == diff){
        cout<< maxi-1<<endl;
      }else{
        cout<< min(diff,maxi)<<endl;
      }
      
    }
    return 0;
}