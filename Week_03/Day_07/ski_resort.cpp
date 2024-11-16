//https://codeforces.com/problemset/problem/1840/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int> ans;
        int l =0;
        ll cnt = 0;
        while(l<n){
            if(v[l]<=q){
                cnt++;
            }
            else{
                ans.push_back(cnt);
                cnt = 0;
            }
            l++;
        }
        ans.push_back(cnt);
        ll a = 0;
        for(int val:ans){
            if(val==0 || val<k){
                continue;
            }
            ll x = val-k+1;
            ll sum = (x*(x+1))/2;
            a+=sum;
        }
        cout<<a<<'\n';
    }
    return 0;
}