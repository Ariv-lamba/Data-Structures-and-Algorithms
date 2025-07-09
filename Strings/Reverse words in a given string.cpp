#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    getline(cin , s);
    int n = s.size();
    reverse(s.begin(), s.end());
    int count =0;
    int start =0;
    for(int i =0; i<n; i++){
        if(s[i]!= '.'){
            count++;
        }
        else{
            // i.like.this.program.very.much
            reverse(s.begin()+start, s.begin()+count+start);
            start += count +1;
            count = 0;
        }

    }
    cout << s << endl;

    return 0;
}
