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
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;

        int count = 0;
        for(int i =1; i<=n/2; i++){
            if(n%i == 0){
                count++;
            }
        }
        count++;
        cout << count << endl;
    }
    return 0;
}