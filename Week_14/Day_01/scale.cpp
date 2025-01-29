//https://codeforces.com/problemset/problem/1996/B
#include<bits/stdc++.h>
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
        vector<string> v;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            v.push_back(s);
        }
        vector<string> ans;
        for(int i=0;i<n;i+=k){
            string x;
            for(int j=0;j<n;j+=k){
                x.push_back(v[i][j]);
            }
            ans.push_back(x);
        }
        for(auto val:ans){
            cout<<val<<'\n';
        }
        // cout<<'\n';
    }
    return 0;
}