#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin , s);
    int n = s.size();
	for(int i =0; i<n; i++){
		if(s[i]-'a' < 26 && s[i] -'a' >= 0){
			s[i] = s[i]-'a'+'A';
		}else{
			s[i] = s[i] -'A'+'a';
		}
	}
	cout << s << endl;
	return 0;

}

// can also use inbuild functions like  isupper(), islower(), toupper(), and tolower()
