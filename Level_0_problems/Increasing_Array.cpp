#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<string>
using namespace std;

int main(){
    
       int n;
       cin>>n;
       int arr[n];
       for(int i = 0; i < n; i++){
        cin>>arr[i];
       }
       long long int count =0;
       for(int i =1; i<n; i++){
        if(arr[i]<arr[i-1]){
            count += (arr[i-1]- arr[i]);
            arr[i] = arr[i-1];
        }
       }
       cout << count << endl;
    
    return 0;
}