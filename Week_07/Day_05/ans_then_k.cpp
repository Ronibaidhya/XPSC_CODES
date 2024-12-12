//https://codeforces.com/problemset/problem/1527/A
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
        int maxBit = __lg(n);
        int ans = 0;
        for(int i=0;i<maxBit;i++){
            ans+=(1<<i);
        }
        cout<<ans<<'\n';
    }
    return 0;
}