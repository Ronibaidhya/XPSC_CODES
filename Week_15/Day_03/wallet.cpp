//https://codeforces.com/problemset/problem/1919/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll x = a+b;
        if(x%2==0){
            cout<<"Bob\n";
        }
        else{
            cout<<"Alice\n";
        }
    }
    return 0;
}