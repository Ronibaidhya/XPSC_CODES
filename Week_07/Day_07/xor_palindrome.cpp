//https://codeforces.com/problemset/problem/1867/B
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
        string s;
        cin>>s;
        int mn = 0,mx = 0;
        for(int i=0;i<(n/2);i++){
            if(s[i]!=s[n-i-1]){
                mn++;
            }
        }
        mx = n-mn;
        string ans(n+1,'0');
        if(n%2==0){
            for(int i=mn;i<=mx;i+=2){
                ans[i] = '1';
            }
        }
        else{
            for(int i=mn;i<=mx;i++){
                ans[i] ='1';
            }
        }
        for(auto val:ans){
            cout<<val;
        }
        cout<<'\n';
    }
    return 0;
}