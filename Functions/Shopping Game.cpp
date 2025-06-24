#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	 while(t--){
		 int n, m;
	cin >> n >> m;
	int x =1;
	bool flag = true;
	while(n>0 && m>0){
		if(flag){
			n=n-x;
			flag = false;
		}else{
			m = m-x;
			flag = true;
		}
		x++;
	}
	string s =(n>0)?"Aayush":"Harshit";
	cout << s << endl;
	 }
	return 0;
} 
	
