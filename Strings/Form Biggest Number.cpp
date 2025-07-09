#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std; 

// Custom comparison for sorting strings to form the largest number
bool customCompare( string& a, string& b) {
    return (a + b) > (b + a);
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> check(n);
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            check[i] = to_string(num);
        }

        sort(check.begin(), check.end(), customCompare);

        string mus = "";
        for (int i = 0; i < n; i++) {
            mus += check[i];
        }

        if (mus[0] == '0' && mus.length() > 1) {
            cout << 0 << endl;
        } else {
            cout << mus << endl;
        }
    }
    return 0;
}
