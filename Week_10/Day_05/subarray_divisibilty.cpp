//https://cses.fi/problemset/task/1662
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll> sum(n);
    sum[0] = v[0];
    for(int i=1;i<n;i++){
        sum[i] = sum[i-1]+v[i];
    }
    map<ll,ll> mp;
    ll ans = 0;
    for(int i=0;i<n;i++){
        if(sum[i]%n==0){
            ans++;
        }
        ll x = ((sum[i]%n)+n)%n;
        auto it = mp.find(x);
        if(it!=mp.end()){
            ans+=mp[x];
        }
        mp[x]++;
    }
    cout<<ans<<'\n';
    return 0;
}
