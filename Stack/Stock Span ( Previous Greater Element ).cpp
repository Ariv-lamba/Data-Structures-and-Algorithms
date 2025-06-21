#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >>n ;
	int arr[n];
	for(int i =0; i<n; i++){
		cin >> arr[i];
	}
	stack<int>s;
	vector<int> ans(n);
	for(int i =0; i<n; i++){
		while(!s.empty() && arr[s.top()] <= arr[i]){
			s.pop();
		}
		int ind = (s.empty())?-1:s.top();
		ans[i] = (i - ind) ;
		s.push(i);
	}
	for(int i =0; i<n; i++){
		cout << ans[i] << " ";
	}
	cout << "END";
	return 0;
}
