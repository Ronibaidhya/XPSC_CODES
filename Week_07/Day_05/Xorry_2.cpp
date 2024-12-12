//https://www.codechef.com/problems/XORRY2
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
        int a = (1<<maxBit);
        // int ans = __bit_floor(n);
        int x = n-a;
        int mx = __lg(x);
        int cnt = 0;
        for(int i=mx;i>=0;i--){
            int ans = (x>>i)&1;
            if(!ans){
                cnt++;
            }
        }
        cout<<(1LL<<cnt)<<'\n';
    }
    return 0;
}