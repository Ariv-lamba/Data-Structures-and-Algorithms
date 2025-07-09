#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    getline(cin , s);
    int n = s.size();
    int i =0, count =1;
    string ans = "";
    while(i<n-1){
        if(s[i+1] == s[i]){
            count++;
        }else{
			if(count == 1){
				ans += s[i];
			}else{
                ans+=s[i]+to_string(count);
                count = 1;
			}
        }
        i++;
    }
	if(count >1){
		ans += s[n-1] + to_string(count);
	}else{
		ans += s[n-1];
	
	}
    
    cout << ans <<endl;
    return 0;
}
