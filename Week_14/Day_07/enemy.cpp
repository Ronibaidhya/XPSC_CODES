//https://codeforces.com/problemset/problem/61/E
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ll long long int
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T> , rb_tree_tag, tree_order_statistics_node_update>;

ll triple(ll n){
    return (n*(n+1))/2;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    pbds<int> a;
    vector<int> inv(n);
    for(int i=n-1;i>=0;i--){
        inv[i] = a.order_of_key(v[i]);
        a.insert(v[i]);
    }
    ll ans = 0;
    pbds<int> p;
    for(int i=0;i<n;i++){
        ll gt = p.size()-p.order_of_key(v[i]);
        ans+=(gt*inv[i]);
        p.insert(v[i]);
    }
    cout<<ans<<'\n';
    return 0;
}


//https://codeforces.com/contest/61/submission/40569977
// #include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp> // Common file
// #include <ext/pb_ds/tree_policy.hpp>     // Including tree_order_statistics_node_updat

// using namespace __gnu_pbds;
// using namespace std;

// typedef long long ll;
// typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

// const ll MAXN = 1e6 + 5;
// ll N;
// ll A[MAXN];
// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cin >> N;
//     for (ll i = 0; i < N; i++) {
//         cin >> A[i];
//     }
//     ordered_set lset;
//     ordered_set rset;
//     for (ll i = 1; i < N; i++) {
//         rset.insert(A[i]);
//     }
//     ll ans = 0;
//     for (ll i = 0; i < N; i++) {
//         ll leftCnt = lset.size() - lset.order_of_key(A[i] + 1);
//         ll rightCnt = rset.order_of_key(A[i]);
//         ans += leftCnt * rightCnt;
//         lset.insert(A[i]);
//         rset.erase(A[i + 1]);
//         // cout<<rightCnt<<" "<<leftCnt<<'\n';
//     }
//     cout << ans << endl;
// }