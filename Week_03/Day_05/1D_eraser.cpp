//https://codeforces.com/contest/1873/problem/D
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
        int r=0;
        int ans = 0;
        while(r<n){
            if(s[r]=='B'){
                ans++;
                r+=k;
            }
            else{
                r++;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}