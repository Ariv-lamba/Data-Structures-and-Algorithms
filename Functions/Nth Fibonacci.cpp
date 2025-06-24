#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	if(n==0||n==1){
		cout << n << endl;
	}
	int x = 0, y=1, curr=0;
	while(n>1){
		curr = x+y;
		x = y;
		y = curr;
		n--;
	}
	cout << curr << endl;
	return 0;
}
