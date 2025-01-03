//https://codeforces.com/problemset/problem/1538/C
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll ans = 0;
        for(int i=0;i<n-1;i++){
            int x = l-v[i];
            int y = r-v[i];
            auto it = lower_bound(v.begin()+i+1,v.end(),x);
            auto it1 = upper_bound(v.begin()+i+1,v.end(),y);
            ans+=it1-it;
        }
        cout<<ans<<'\n';
    }
    return 0;
}

