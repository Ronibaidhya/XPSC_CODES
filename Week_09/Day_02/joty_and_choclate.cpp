//https://codeforces.com/problemset/problem/678/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll lcm(ll x, ll y){
    return (x/__gcd(x,y))*y;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    ll cnta = n/a,cntb = n/b,overlap = n/lcm(a,b);
    if(p>q){
        cntb-=overlap;
    }
    else{
        cnta-=overlap;
    }
    cout<<cnta*p + cntb*q;
    return 0;
}