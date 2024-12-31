//https://codeforces.com/problemset/problem/1676/E
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
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        vector<int> sum(n);
        sum[0] = v[0];
        for(int i=1;i<n;i++){
            sum[i] = sum[i-1]+v[i];
        }
        while(k--){
            int x;
            cin>>x;
            int l=0,r=n-1,ans = -1;
            // while(l<=r){
            //     int mid = (l+r)/2;
            //     if(sum[mid]>=x){
            //         r = mid-1;
            //         ans = mid+1;
            //     }
            //     else{
            //         l = mid+1;
            //     }
            // }
            auto it = lower_bound(sum.begin(),sum.end(),x);
            if(it!=sum.end()){
                ans = it-sum.begin();
                ans++;
            }
            cout<<ans<<'\n';
        }
    }
    return 0;
}