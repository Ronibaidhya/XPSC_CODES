//https://codeforces.com/problemset/problem/1256/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll a,b,n,s;
        cin>>a>>b>>n>>s;
        if((a*n)>=s){
            ll x = s%n;
            if(x<=b){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            ll d = s - (a*n) ;
            if(d<=b){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}