#include<bits/stdc++.h>
using namespace std;

int main() {
	int n ;
	cin >>n;
	int arr[n];
	
	for(int i =0; i<n; i++){
		cin >> arr[i];
		
	}
	int x ;
	 cin >> x;
	 int flag = -1;
	  for(int i =0; i<n; i++){
		  if(arr[i] == x){
			  flag = i;
			  break;
		  }
	  }
	cout << flag << endl;
	return 0;
}
