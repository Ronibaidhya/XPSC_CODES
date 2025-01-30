//https://cses.fi/problemset/task/1619
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<int,int> mp;
    while(n--){
        int l,r;
        cin>>l>>r;
        mp[l]++;
        mp[r+1]--;
    }
    ll ans = 0;
    ll sum = 0;
    for(auto [x,y]:mp){
        sum+=y;
        ans = max(ans,sum);
    }
    cout<<ans<<'\n';
    return 0;
}