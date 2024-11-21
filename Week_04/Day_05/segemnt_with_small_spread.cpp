//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll l=0,r=0;
    multiset<ll> ml;
    ll ans = 0;
    while(r<n){
        ml.insert(a[r]);
        auto mx = ml.rbegin();
        auto mn = ml.begin();
        if(*mx - *mn <=k){
            ans+=(r-l+1);
        }
        else{
            while(l<=r){
                auto MX = ml.rbegin();
                auto MN = ml.begin();
                if(*MX-*MN<=k) break;
                ml.erase(ml.find(a[l]));
                l++;
            }
            ll MX = *ml.rbegin(), MN = *ml.begin();
            if(MX - MN <=k){
                ans+=(r-l+1);
            }
        }
        r++;
    }
    cout<<ans;
    return 0;
}