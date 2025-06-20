// Leetcode 85 

class Solution {
public:
    vector<int> NSE ( vector<int>&arr){
        int n = arr.size();
        stack<int>st;
        vector<int>ok(n);
        ok[n-1]= n;
        st.push(n-1);
        for(int i = n-2; i>=0; i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            int ind = (st.empty())? n : st.top();
            ok[i] = ind;
            st.push(i);
        }
        return ok;
    }
    vector<int> PSE ( vector<int>&arr){
         int n = arr.size();
        stack<int>st;
        vector<int>ok(n);
        ok[0]= -1;
        st.push(0);
        for(int i = 1; i<n; i++){
            while(!st.empty() && arr[st.top()]>=arr[i] ){
                st.pop();
            }
            int ind = (st.empty())? -1 : st.top();
            ok[i] = ind;
            st.push(i);
        }
        return ok;

    }

    int largestRectangleArea(vector<int>& arr) {

        // try to solve it in single pass. 
        // vector<int>nse = NSE(arr);
        // vector<int>pse = PSE(arr);
        int n = arr.size();
        long long int maxarea =0;
        int nse =0, pse = 0;
        // for(int i =0; i<n; i++){
        //     maxarea = max( maxarea, 1LL*arr[i]*(nse[i]-pse[i]-1) );
        // }
        stack<int>s;
        for(int i= 0; i<n; i++){
            while(!s.empty() && arr[s.top()] > arr[i]){
                int ind = s.top();
                s.pop();
                nse = i;
                pse = (s.empty())? -1 : s.top();
                maxarea = max( maxarea , 1LL*arr[ind]*(nse-pse-1));
            }
            s.push(i);
        }
        while(!s.empty()){
            nse = n;
            int ind = s.top();
            s.pop();
            pse = s.empty() ? -1 : s.top();
            maxarea = max( maxarea , 1LL*arr[ind]*(nse-pse-1));
        }
        return int(maxarea);
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>>ans(n, vector<int>(m, 0));
        for(int j = 0; j<m; j++){
            int sum = 0;
            for(int i = 0; i<n; i++){
                char x = (matrix[i][j]);
                if(x == '1'){
                    sum+=1;
                }else{
                    sum = 0;
                }
                ans[i][j] = sum;
            }
            
        }

        int maxarea = 0;
        for(int i =0; i<n; i++){
            maxarea = max( maxarea , largestRectangleArea(ans[i]));
        }
        return maxarea;

    }
};
