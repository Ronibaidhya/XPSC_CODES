//https://codeforces.com/problemset/problem/1474/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool isprime(ll n){
    if(n==1) return false;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll d;
        cin>>d;
        ll x=1+d,y;
        while(!isprime(x)){
            x++;
        }
        y = x+d;
        while(!isprime(y)){
            y++;
        }
        cout<<x*y<<'\n';
    }
    return 0;
}