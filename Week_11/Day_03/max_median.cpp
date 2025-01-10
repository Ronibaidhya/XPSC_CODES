//https://codeforces.com/problemset/problem/1201/C
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    auto ok = [&](ll median) {
        ll cnt = 0;
        for(int i=(n/2);i<n;i++){
            if(median>v[i]){
                cnt+=(median-v[i]);
            }
        }
        if(cnt<=k){
            return true;
        }
        else{
            return false;
        }
    };
    int l=1,r=2e9,mid,ans;
    while(l<=r){
        mid = l+(r-l)/2;
        if(ok(mid)){
            ans = mid;
            l = mid+1;
        }
        else{
            r = mid - 1;
        }
    }
    cout<<ans<<'\n';
    return 0;
}

