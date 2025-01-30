//https://codeforces.com/problemset/problem/276/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    vector<int> d(n+2),pref(n+2);
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        d[l]++;
        d[r+1]--;
    }
    for(int i=1;i<=n;i++){
        pref[i] = pref[i-1]+d[i];
    }
    sort(v.rbegin(),v.rend());
    sort(pref.rbegin(),pref.rend());
    ll sum = 0;
    for(int i=0;i<n;i++){
        // cout<<v[i]<<" "<<pref[i]<<'\n';
        sum+=(1LL*v[i]*pref[i]);
    }
    cout<<sum<<'\n';
    return 0;
}