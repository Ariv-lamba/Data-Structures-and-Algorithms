#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    getline(cin , s);
    int n = s.size();
	for(int i =0; i<n; i++){
		if(i%2==0){
			s[i] = s[i]+1;
		}else{
			s[i] = s[i]-1;
		}
	}
	cout << s << endl;

}
