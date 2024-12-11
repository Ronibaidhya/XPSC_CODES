//https://codeforces.com/problemset/problem/1635/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v(n);
        ll ans = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            ans|=v[i];
        } 
        cout<<ans<<'\n';
    }
    return 0;
}