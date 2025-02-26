//https://codeforces.com/problemset/problem/1872/D
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll lcm (ll x,ll y){
    return (x*y)/__gcd(x,y);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;
        ll a = n/x,b = n/y,c = n/lcm(x,y);
        a-=c;
        b-=c;
        ll sum = (a*(n+(n-a+1)))/2;
        sum-=(b*(1+b))/2;
        cout<<sum<<'\n';
    }
    return 0;
}