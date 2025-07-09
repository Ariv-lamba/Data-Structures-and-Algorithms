#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	getline(cin , s);
	int n = s.size();
	int count =0, ans =0;

	for(int i =0; i<n; i++){

		count = 0;
		for(int j = i; j<n; j++){
			if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j]=='o' || s[j] =='u'){
				count++;
			}else{
				ans = max(ans, count);
				break;
			}
		}
		ans = max( ans, count);

	}
	
	cout << ans << endl;

	return 0;
}
