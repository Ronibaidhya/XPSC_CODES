//https://codeforces.com/problemset/problem/1421/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        ll ans = x^y;
        cout<<ans<<"\n";
    }
    return 0;
}