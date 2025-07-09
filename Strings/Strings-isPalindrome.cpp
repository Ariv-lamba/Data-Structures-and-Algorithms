#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    getline(cin , s);
    int n = s.size();
	bool flag = true;
	int i =0, j =  n-1;
	while(i<=j){
		if(s[i]!=s[j]){
			flag = false;
			break;
		}else{
			i++;
			j--;
		}
	}
	if(flag){
		cout << "true" << endl;
	}else{
		cout << "false" << endl;
	}

	
	

	return 0;
}


// can also do this using reverse function

/*

    string ans = s; 
	reverse(ans.begin(), ans.end());
	bool flag = (ans == s)? true: false;
	if(flag){
		cout << "true" << endl;
	}else{
		cout << "false" << endl;
	}

*/
