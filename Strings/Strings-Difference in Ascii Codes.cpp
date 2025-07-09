#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    getline(cin , s);
    int n = s.size();
	int count =0;
	string ans = "";
	for(int i =0; i<n-1; i++){
         count = s[i+1]-s[i];
		
		 ans += s[i]+to_string(count);
	}
	ans+=s[n-1];
	cout << ans << endl;

	return 0;
}
