#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;


void solve(string &s, int ind,string & curr, unordered_map<char, int>&mp, unordered_map<char, bool>&hehe){
     if(ind == s.size())return;

     char ch = s[ind];

      if(hehe[ch]){
         solve(s, ind+1 , curr, mp, hehe);
         return ;
     }

     while(!curr.empty() && curr.back() > ch &&  mp[curr.back()] > ind){
          hehe[curr.back()] = false;
          curr.pop_back();
     }

     hehe[ch] = true;
     curr.push_back(ch);

     solve(s, ind+1, curr, mp, hehe);

}

int main(){
    string s;
    cin>>s;

    // used to store last index of matrix.
    unordered_map<char, int>mp;
     unordered_map<char, bool>hehe;
    string curr = "";
    for(int i =0; i<s.size(); i++){
        mp[s[i]]=i;
    }

   
     solve(s, 0, curr, mp, hehe);
     cout << curr << endl;
     return 0;


}
