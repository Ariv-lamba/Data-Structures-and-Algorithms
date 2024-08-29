#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<string>
#include<map>
#define lll long long int;
#define ll long long;



using namespace std;

int solve(int n){
int count = 0;
        while(n>1){
            if(n%6 == 0){
                n = n/6;
                count++;
            }else if(n%3 == 0){
                n = n/3;
                count = count +2;
            }
            else{
                return -1;
            }

        }
        return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
       int n ;
        cin>>n;
        cout<< solve(n)<< endl;
    }
    return 0;
}