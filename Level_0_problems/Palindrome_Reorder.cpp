#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<string>
#include<map>
using namespace std;

string solve(string str){
    int n = str.size();
    string ans = "";

    vector<int>check(27, 0);

    for(int i =0; i<n; i++){
        check[str[i]-'A']++;
    }
    int count =0;
    for(int i =0; i<27; i++){
        if(check[i]%2 != 0){
            count++;
        }
    }
   
    if(count >1)return ans;
    

    for(int i =0; i<26; i++){
        if(check[i]%2 != 0){
            while(check[i]--){
                ans += ('A'+i);
            }
        }
    }
    for(int i =0; i<26; i++){
        if(check[i]%2 == 0){
            char c =('A'+i);

            for(int i =0; i<=check[i]/2; i++)
            while(check[i]>0){
                ans = c + ans + c;
                check[i] =  check[i] - 2;
            }
        }
    }
    return ans;
}

int main(){
        string s ;
        getline(cin,s);
       string ss =  solve(s);
       if(ss.size() == 0){
        cout<< "NO SOLUTION" <<endl;
       }
       else{
        cout << ss << endl;
       }
    return 0;
}