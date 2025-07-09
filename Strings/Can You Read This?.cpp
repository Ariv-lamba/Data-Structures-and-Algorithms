#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    getline(cin , s);
    int n = s.size();
    
    int count =1;
    int start =0;
    bool flag = true;
    for(int i =0; i<n; i++){
        if( !(s[i] >= 'A' && s[i] <= 'Z') ){
            count++;
        }
        else{
            if(flag){
              flag = false;
            }else{
            string sub = s.substr(start, count);
            cout << sub << endl;
            start  = i;
            count = 1;
           }
        }

    }
    string last_sub = s.substr(start, n - start);
    cout << last_sub << endl;
   

    return 0;
}
