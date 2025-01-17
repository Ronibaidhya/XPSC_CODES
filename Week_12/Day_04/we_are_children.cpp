//https://codeforces.com/problemset/problem/1850/F
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
        vector<int> v;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x<=n){
                v.push_back(x);
                mp[x]++;
            }
        }
        vector<int> ans(n+1,0);
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j+=i){
                ans[j]+=mp[i];
            }
        }
        int val = INT_MIN;
        for(int i=0;i<=n;i++){
            val = max(val,ans[i]);
        }
        cout<<val<<'\n';
    }
    return 0;
}