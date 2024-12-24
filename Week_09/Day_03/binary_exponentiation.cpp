//https://cses.fi/problemset/task/1095
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1e9+7;

int power(int x,int n){
    int ans = 1;
    while(n){
        if(n&1){
            ans = (1LL* ans%MOD * x%MOD) % MOD;
        }
        // else{
        //     cout<<0<<" ";
        // }
        x = (1LL * x%MOD * x%MOD)%MOD;
        n = n>>1;
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        cout<<power(x,y)<<'\n';
    }
    
    return 0;
}