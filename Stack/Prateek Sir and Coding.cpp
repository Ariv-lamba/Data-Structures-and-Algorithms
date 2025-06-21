#include<bits/stdc++.h>
using namespace std;

int main () {
	int n;
	cin >> n;
	vector<vector<int>>ans;
	for(int i =0; i<n; i++){
		int t;
       cin >> t;
       if(t == 1) {
          ans.push_back({1});
        } else {
           int c;
           cin >> c;
           ans.push_back({2, c});
        }
	}

	stack<int>s;
	for(int i =0; i<n; i++){
		if(ans[i][0] == 2){
			s.push(ans[i][1]);
		}else{
			if(!s.empty()){
				cout << s.top() <<endl;
				s.pop();
			}else{
				cout << "No Code" << endl;
			}
		}
	}
	return 0;
}
