//https://codeforces.com/problemset/problem/1901/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans = 0;
        for(int i=1;i<n;i++){
            ans = max(ans,abs(v[i]-v[i-1]));
        }
        ans = max(ans,2*abs(x-v[n-1]));
        ans = max(ans,v[0]);
        cout<<ans<<'\n';
    }
    return 0;
}