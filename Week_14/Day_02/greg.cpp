//https://codeforces.com/problemset/problem/295/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    vector<ll> d(n+2),pref(n+2);
    vector<vector<ll>> q;
    for(int i=0;i<m;i++){
        vector<ll> tmp(3);
        cin>>tmp[0]>>tmp[1]>>tmp[2];
        q.push_back(tmp);
    }
    vector<ll> query(m+2);
    while(k--){
        ll x,y;
        cin>>x>>y;
        query[x]++;
        query[y+1]--;
    }

    for(int i=1;i<=m;i++){
        query[i] = query[i-1]+query[i];
        ll l = q[i-1][0];
        ll r = q[i-1][1];
        ll c = q[i-1][2];
        d[l]+=(query[i]*c);
        d[r+1]-=(query[i]*c);
    }
    for(int i=1;i<=n;i++){
        pref[i] = pref[i-1]+d[i];
        cout<<v[i]+pref[i]<<" ";
    }
    return 0;
}