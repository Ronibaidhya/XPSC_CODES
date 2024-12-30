//https://cses.fi/problemset/task/1661
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll n,x;
    cin>>n>>x;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll> sum(n);
    sum[0] = v[0];
    for(int i=1;i<n;i++){
        sum[i] = sum[i-1]+v[i];
    }
    map<ll,ll> mp;
    ll ans = 0;
    for(int i=0;i<n;i++){
        if(sum[i]==x){
            ans++;
        }
        auto it = mp.find(sum[i]-x);
        auto it1 = mp.find(sum[i]);
        mp[sum[i]]++;
        if(it!=mp.end()){
            ans+=mp[sum[i]-x];
        }
    }
    cout<<ans<<'\n';
    return 0;
}
// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(NULL);
//     ll n,x;
//     cin>>n>>x;
//     vector<ll> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     vector<ll> sum(n);
//     sum[0] = v[0];
//     for(int i=1;i<n;i++){
//         sum[i] = sum[i-1]+v[i];
//     }
//     map<ll,ll> mp;
//     ll ans = 0;
//     for(int i=0;i<n;i++){
//         if(sum[i]==x){
//             ans++;
//         }
//         auto it = mp.find(sum[i]-x);
//         if(it!=mp.end()){
//             ans+=mp[sum[i]-x];
//         }
//         mp[sum[i]]++;
//     }
//     cout<<ans<<'\n';
//     return 0;
// }