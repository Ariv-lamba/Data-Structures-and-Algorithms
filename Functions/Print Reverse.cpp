#include<bits/stdc++.h>
using namespace std;
int fun(int n){
	int newnum =0;
	while(n>0){
		int x = n%10;
		newnum = 10*newnum + x;
		n = n/10;
	}
	return newnum;
}
int main() {
	int n;
	 cin >> n;
	 int ans = fun(n);
	 cout << ans;

	return 0;
}
