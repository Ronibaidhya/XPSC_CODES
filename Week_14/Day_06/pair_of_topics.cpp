//https://codeforces.com/problemset/problem/1324/D
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ll long long int
using namespace std;

template <typename T> using pbds = tree<T, null_type, less_equal<T> , rb_tree_tag, tree_order_statistics_node_update>;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll> a(n);
    vector<ll> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    pbds<ll> p;
    ll ans = 0;
    for(int i=n-1;i>=0;i--){
        ll x = a[i]-b[i];
        ans+=p.order_of_key(x);
        p.insert((-1)*x);
    }
    cout<<ans<<"\n";
    return 0;
}