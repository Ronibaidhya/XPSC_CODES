//https://codeforces.com/problemset/problem/1873/F
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
        vector<int> a(n);
        vector<int> h(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>h[i];
        }
        int l=0,r=0,ans=0;
        int sum = 0;
        while(r<n){
            if(r==0 || h[r-1]%h[r]==0){
                sum+=a[r];
            }
            else{
                l = r;
                sum = a[r];
            }
            if(sum<=k){
                ans = max(ans,r-l+1);
            }
            else{
                while(l<=r && sum>k){
                    sum-=a[l];
                    l++;
                }
                if(sum<=k){
                    ans = max(ans,r-l+1);
                }
            }
            r++;
        }
        cout<<ans<<'\n';

    }
    return 0;
}