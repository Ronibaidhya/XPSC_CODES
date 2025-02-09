//https://codeforces.com/problemset/problem/1520/D
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        map<int,int> mp;
        ll ans = 0;
        for(int i=0;i<n;i++){
            v[i] = v[i]-i+1;
            ans+=mp[v[i]];
            mp[v[i]]++;
        }
        // for(auto [x,y]:mp){
        //     cout<<x<<" "<<y<<'\n';
        // }
        cout<<ans<<'\n';
    }
    return 0;
}