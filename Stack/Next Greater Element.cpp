#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    stack<int>st;
    vector<int>ans(n);
    ans[n-1] = -1;
    st.push(arr[n-1]);
    for(int i = n-2; i>=0; i--){
        while(!st.empty() && st.top()<= arr[i]){
            st.pop();
        }
        int val = (st.empty())?-1:st.top();
        ans[i]= val;
        st.push(arr[i]);
    }
    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }

    return 0;
}
