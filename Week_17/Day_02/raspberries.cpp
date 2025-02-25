//https://codeforces.com/problemset/problem/1883/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        ll even = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==0 && even<2){
                even++;
            }
        }
        ll ans = INT_MAX;
        for(int i=0;i<n;i++){
            ll x = v[i]%k;
            if(x==0){
                ans = 0;
            }
            else{
                ans = min(ans,k-x);
            }
            // cout<<ans<<" ";
        }
        if(k==4){
            ans = min(ans,2-even);
        }
        cout<<ans<<'\n';
    }
    return 0;
}