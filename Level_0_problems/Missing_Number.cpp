#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<string>
#include<map>
#define lll long long int;
#define ll long long;
using namespace std;

int main(){
    int n ;
    cin>>n;
    int arr[n-1];
    for(int i =0 ; i<n-1; i++){
        cin>>arr[i];
    }
    int x = n;
    for(int i=0; i<n-1; i++){
        x = x^arr[i]^(i+1);
    }
    cout << x << endl;
    return 0;
}
