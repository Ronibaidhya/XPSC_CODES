//https://codeforces.com/problemset/problem/1985/C
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
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll sum = 0,mx = 0, cnt = 0;
        for(int i=0;i<n;i++){
            sum+=v[i];
            mx = max(mx,v[i]);
            if(sum-mx == mx){
                cnt++;
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}