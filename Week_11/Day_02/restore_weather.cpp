//https://codeforces.com/problemset/problem/1833/B
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v[i] = {x,i};
        }
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(v.begin(),v.end());
        sort(a.begin(),a.end());
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            // cout<<a[v[i].second]<<" ";
            ans[v[i].second] = a[i];
        }
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout<<'\n';
    }
    return 0;
}

