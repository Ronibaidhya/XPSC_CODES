//https://codeforces.com/problemset/problem/1988/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll check_kth_bit_on_or_off(ll n,ll k){
    return (n>>k)&1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll maxBit = __lg(n);
        vector<ll> v;
        for(int i=maxBit;i>=0;i--){
            if(check_kth_bit_on_or_off(n,i)){
                ll ans = n-(1<<i);
                if(ans>0){
                    v.push_back(n-(1LL<<i));
                }
            }
        }
        v.push_back(n);
        cout<<v.size()<<'\n';
        for(auto x:v){
            cout<<x<<" ";
        }
        cout<<'\n';
    }
    return 0;
}