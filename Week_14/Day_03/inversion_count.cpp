//https://www.spoj.com/problems/INVCNT/en/
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ll long long int
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T> , rb_tree_tag, tree_order_statistics_node_update>;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        pbds<int> p;
        ll ans = 0;
        for(int i=n-1;i>=0;i--){
            p.insert(v[i]);
            ans+=p.order_of_key(v[i]);
        }
        cout<<ans<<'\n';
    }
    return 0;
}