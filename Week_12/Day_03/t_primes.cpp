//https://codeforces.com/problemset/problem/230/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool isPrime(ll n){
    if(n==1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

bool sq(ll n){
    ll x = sqrt(n);
    return (x*x)==n;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        if(sq(v[i]) && isPrime(sqrt(v[i]))){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}