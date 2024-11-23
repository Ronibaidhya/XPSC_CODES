//https://codeforces.com/problemset/problem/1857/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        map<int,int> mp;
        int n;
        cin>>n;
        int x = (n*(n-1))/2;
        vector<int> v(x);
        for(int i=0;i<x;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        if(mp.size()==1){
            for(int i=0;i<n;i++){
                cout<<v[0]<<" ";
            }
            cout<<'\n';
            continue;
        }
        int m = n-1;
        for(auto[a,b]:mp){
            while(b!=0 && b>=m){
                cout<<a<<" ";
                b-=m;
                m--;
            }
        }
        int ans = 1e9;
        cout<<ans<<'\n';
    }
    return 0;
}