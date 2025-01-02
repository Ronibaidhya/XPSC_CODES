//https://codeforces.com/problemset/problem/1742/E
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<ll> ans(n);
        vector<ll> mx(n);
        ans[0] = v[0];
        mx[0] = v[0];
        for(int i=1;i<n;i++){
            mx[i] = max(mx[i-1],v[i]);
            ans[i] = ans[i-1]+v[i];
        }
        while(q--){
            ll x;
            cin>>x;
            auto it = upper_bound(mx.begin(),mx.end(),x);
            if(it==mx.begin()){
                cout<<"0 ";
            }
            else{
                it--;
                int i = it-mx.begin();
                cout<<ans[i]<<" ";
            }
        }
        cout<<'\n';
    }
    return 0;
}

