//https://vjudge.net/contest/672779#problem/E
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll ans = b;
        for(int x:v){
            ans+=min(a-1,x);
        }
        cout<<ans<<'\n';
    }
    return 0;
}