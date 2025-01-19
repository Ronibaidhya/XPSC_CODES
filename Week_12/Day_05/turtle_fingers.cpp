//https://codeforces.com/problemset/problem/1933/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll a,b,l;
        cin>>a>>b>>l;
        set<int> ans;
        ll x = 1;
        for(int i=1;i<=20 && x<=l;i++){
            ll y = 1;
            for(int j=1;j<=20 && y<=l;j++){
                if((l%(x*y))==0){
                    ans.insert(l/(x*y));
                }
                y*=b;
            }
            x*=a;
        }
        cout<<ans.size()<<'\n';
    }
    return 0;
}