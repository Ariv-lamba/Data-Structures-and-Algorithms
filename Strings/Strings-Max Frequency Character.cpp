#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    getline(cin , s);

    int n = s.size();
	//cout << n << endl;

	vector<int>low(26, 0), high(26, 0);

	for(int i =0; i<n; i++){
		if(s[i]-'a' <26 && s[i]-'a' >=0){
			low[s[i]-'a']++;
		}else{
			high[s[i]-'A']++;
		}
	}
	// for(int i =0; i<26; i++){
	// 	cout << low[i] << " "<< high[i] <<endl;
	// }

	int count = 0;
	char text;
	for(int i =0; i<26; i++){
		if(low[i] > count){
			count = low[i];
			text = 'a'+ i;
		}
		if(high[i] > count){
			count = high[i];
			text =  'A' + i;
		}
	}
	cout << text << endl;
    return 0;
}
