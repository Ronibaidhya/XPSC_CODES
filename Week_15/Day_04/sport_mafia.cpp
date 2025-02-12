//https://codeforces.com/problemset/problem/1195/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll sum(ll n){
    return (n*(n+1))/2;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    ll l=1,r=n;
    ll ans = -1;
    while(l<=r){
        ll mid = l+(r-l)/2;
        ll s = sum(mid) - n+mid;
        if(s==k){
            ans = n-mid;
            break;
        }
        else if(s>k){
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    cout<<ans<<'\n';
    return 0;
}