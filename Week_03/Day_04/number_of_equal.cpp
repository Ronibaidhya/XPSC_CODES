//https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    // map<int,ll> mp1;
    // map<int,ll> mp2;
    for(int i=0;i<n;i++){
        cin>>a[i];
        // mp1[a[i]]++;
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
        // mp2[b[i]]++;
    }

    int l=0,r=0;
    ll ans = 0;
    while(l<n && r<m){
        int curr = a[l],cnt1 = 0, cnt2=0;
        while(l<n && a[l]==curr){
            cnt1++,l++;
        }
        while(r<m && curr>b[r]){
            r++;
        }
        while(r<m && b[r]==curr){
            cnt2++,r++;
        }
        ans+=(1LL * cnt1 * cnt2);
    }
    cout<<ans<<'\n';
    // ll cnt = 0;
    // for(auto[x,y]:mp1){
    //     auto it = mp2.find(x);
    //     if(it!=mp2.end()){
    //         ll ans = it->second*y;
    //         cnt+=ans;
    //     }
    // }
    // cout<<cnt;
    return 0;
}