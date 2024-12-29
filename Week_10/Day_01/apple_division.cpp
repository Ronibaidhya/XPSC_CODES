//https://cses.fi/problemset/task/1623
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    ll sum = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    ll ans = LONG_LONG_MAX;
    for(int i=0;i<(1<<n);i++){
        ll x = 0;
        for(int j=0;j<n;j++){
            int t = (i>>j)&1;
            if(t){
                x+=v[j];
            }
        }
        ans = min(ans,abs(sum-x-x));
    }
    cout<<ans<<'\n';
    return 0;
}