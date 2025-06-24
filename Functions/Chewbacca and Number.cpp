#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int n;
	cin >>n;
	long long int x = n;
	vector<int>arr;
	while(x>0){
		int y = x%10;
		arr.push_back(y);
		x = x/10;
	}
		int m = arr.size();
	reverse(arr.begin(), arr.end());
	///for(int i =0; i<m; i++){cout << arr[i] <<" ";}

	if(arr[0]!=9 && arr[0]>=5){
		arr[0] = 9 - arr[0];
	}
	for(int i =1; i<m; i++){
		if(arr[i]>=5){
			arr[i] = 9 - arr[i];
		}
	}
	//for(int i =0; i<m; i++){cout << arr[i] <<" ";}

	x =0;
	for(int i =0; i<m; i++){
		x = (x*10+arr[i]);
	}
	cout << x << endl;

	return 0;
}
