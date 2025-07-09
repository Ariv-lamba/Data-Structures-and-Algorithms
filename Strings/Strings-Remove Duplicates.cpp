#include<iostream>
using namespace std;
int main() {
	string s;
	getline(cin ,s);
	int n = s.size();
	 int j = 0;
	string ans = "";
	for(int i =0; i<n-1; i++){
		if(s[i]!=s[i+1]){
			s[j]= s[i];
			 j++;
		}
	}
	s[j] = s[n-1];
	s.resize(j+1);
	cout << s << endl;

	return 0;
}
