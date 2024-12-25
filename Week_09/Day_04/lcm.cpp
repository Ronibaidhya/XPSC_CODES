//https://codeforces.com/problemset/problem/1285/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll LCM(ll a,ll b){
    // return ((a*b)/__gcd(a,b));
    return (a/__gcd(a,b))*b;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v;
    ll mn = LONG_LONG_MAX;
    for(ll i=1;i<=sqrt(n);i++){
        if(n%i==0 && LCM(i,n/i)==n){
            v.push_back({i,n/i});
            mn = min(mn,max(i,n/i));
        }
    }
    cout<<mn<<" "<<n/mn<<'\n';
    return 0;
}