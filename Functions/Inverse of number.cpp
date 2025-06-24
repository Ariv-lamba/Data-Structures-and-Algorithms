#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int val = 1, f_sum =0 ;
	while(n>0){
		int ind = n%10;
		f_sum += pow(10, ind-1)*val;
		val++;
		n = n/10;
	}
	cout << f_sum << endl;
	return 0;
}
