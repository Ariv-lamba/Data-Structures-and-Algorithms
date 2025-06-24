#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int num;
	int x = 0, ans=0;
	while(n>0){
		int y = n%10;
		ans += pow(2,x)*y;
		n= n/10;
		x++;
	}
	cout << ans << endl;
	return 0;
}
