//https://codeforces.com/problemset/problem/2009/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        int a = ceil(x*1.0/k);
        int b = ceil(1.0*y/k);
        int ans = 2*max(a,b);
        if(a>b){
            cout<<ans-1<<'\n';
        }
        else{
            cout<<ans<<'\n';
        }
    }
    return 0;
}