//https://codeforces.com/problemset/problem/1420/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        map<ll,ll> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[__lg(v[i])]++;
        }
        ll ans = 0;
        for(auto [x,y]:mp){
            ll c = (y*(y-1))/2;
            ans+=c;
        }
        cout<<ans<<'\n';
    }
    return 0;
}