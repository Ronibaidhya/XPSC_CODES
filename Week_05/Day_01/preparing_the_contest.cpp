//https://codeforces.com/problemset/problem/1914/B
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
        int x = n-k;
        for(int i=x;i>=1;i--){
            cout<<i<<" ";
        }
        for(int i=(x+1);i<=n;i++){
            cout<<i<<" ";
        }
        cout<<'\n';
    }
    return 0;
}