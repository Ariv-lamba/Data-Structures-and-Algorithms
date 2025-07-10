// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 
  bool check ( string & s){
      string ans = s;
      reverse(ans.begin(), ans.end());
      if(ans == s){
          return 1;
      }
      else{
           return 0;
      }
  }

int main() {
   string s;
   getline(cin ,s);
   int count = 0;
   int n = s.size();
   
   for(int i =0; i<n; i++){
       // odd 
       int left = i, right = i;
       while(left>=0 && right <n){
           if(s[left] == s[right]){
               count++;
               left--;
               right++;
           }else{
               break;
           }
       }
       
       // even length
       left = i, right = i+1;
        while(left>=0 && right <n){
           if(s[left] == s[right]){
               count++;
               left--;
               right++;
           }else{
               break;
           }
       }
       
   }
   cout << count << endl;
   
     
    return 0;
}
