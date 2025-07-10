#include <bits/stdc++.h>
using namespace std;
vector<int>ans = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

bool check(long long n) {
    if (n == 0 || n == 1) {
        return false;
    }
    for (int i = 0; i < 10; ++i) {
        if (n == ans[i]) {
            return true;
        }
        if (n % ans[i] == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int count = 0;
    vector<bool> ok(n, false); 

    for (int len = 1; len <= n; ++len) {
        for (int i = 0; i <= n - len; ++i) {
            int j = i + len - 1; 

            string sub = s.substr(i, len);
            long long num = stoll(sub); 
            
            if (check(num)) {
                bool can_pick = true;
                for (int k = i; k <= j; ++k) {
                    if (ok[k]== true) {
                        can_pick = false; 
                        break;
                    }
                }
                if (can_pick) {
                    count++;
                    for (int k = i; k <= j; ++k) {
                        ok[k] = true;
                    }
                }
            }
			// if cb number no find , then choose next string 
        }
		// same here , bigger length string we have to finc
    }

    cout << count << endl;

    return 0;
}
