#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	cin.ignore(); 
	/*extracts and discards characters from the input buffer.
    Discards one character (by default, it's \n in this case). */
	while(t--){
	string s;
	getline(cin , s);
	
	vector<int>ans(26, 0);
	int n = s.size();
	for(int i =0; i<n; i++){
		ans[s[i]-'a']++;
	}
	char text;
	bool flag = false;
	for(int i =0; i<n; i++){
		if(ans[s[i]-'a'] == 1){
			text = s[i];
			flag = true;
			break;
		}
	}
	if(flag){
		cout << text << endl;
	}else{
		cout << -1 << endl;
	}

}
	return 0;
}
