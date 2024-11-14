//https://codeforces.com/problemset/problem/1690/D
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
        string s;
        cin>>s;
        int ans = INT_MAX;
        int l=0,r=0;
        int w = 0;
        while(r<n){
            if(s[r]=='W'){
                w++;
            }
            if((r-l+1)==k){
                ans = min(ans,w);
                if(s[l]=='W'){
                    w--;
                }
                l++;
            }
            r++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}