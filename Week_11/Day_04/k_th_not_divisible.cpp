//https://codeforces.com/problemset/problem/1352/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        auto ok =[&](int val){
            return (val - (val/n))>=k;
        };
        int l=1,r=2e9,mid,ans;
        while(l<=r){
            mid = l+(r-l)/2;
            if(ok(mid)){
                ans = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}