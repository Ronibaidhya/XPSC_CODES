//https://codeforces.com/problemset/problem/1780/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        ll sum = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        ll temp = 0;
        ll ans = 0;
        for(int i=0;i<n-1;i++){
            temp+=v[i];
            ans = max(ans,__gcd(temp,sum-temp));
        }
        cout<<ans<<'\n';
    }
    return 0;
}