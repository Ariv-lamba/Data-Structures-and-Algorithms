#include<iostream>
using namespace std;
int main() {
	int minif, maxif, s;
	cin >> minif >> maxif >> s;
	for(int i = minif; i<= maxif; i+=s){
		cout << i << " ";
		int x = (i-32)*5;
		x = x/9;
		cout << x << endl;
	}
	return 0;
}
