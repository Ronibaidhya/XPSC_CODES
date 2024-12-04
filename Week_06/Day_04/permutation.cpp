//https://codeforces.com/problemset/problem/1828/B
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
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]] = i+1;
        }
        set<int> s;
        for(auto [x,y]:mp){
            if(x!=y){
                s.insert(abs(x-y));
            }
        }
        int ans = 0;
        for(int x:s){
            ans = __gcd(ans,x);
        }
        cout<<ans<<'\n';
    }
    return 0;
}