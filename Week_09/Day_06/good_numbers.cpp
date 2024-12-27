//https://codeforces.com/problemset/problem/1521/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(b==1){
            cout<<"NO\n";
            continue;
        }
        ll x = 1LL*a,y=1LL*a*b,z=x+y;
        cout<<"YES\n";
        cout<<x<<" "<<y<<" "<<z<<'\n';

    }
    return 0;
}