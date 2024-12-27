//https://codeforces.com/problemset/problem/1742/D
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
        vector<int> a;
        for(auto[x,y]:mp){
            a.push_back(x);
        }
        int ans = INT_MIN;
        int sz = a.size();
        for(int i=0;i<sz-1;i++){
            for(int j=i;j<sz;j++){
                if(__gcd(a[i],a[j])==1){
                    ans = max(ans,mp[a[i]]+mp[a[j]]);
                }
            }
        }
        if(mp.find(1)!=mp.end()){
            ans = max(ans,mp[1]*2);
        }
        if(ans==INT_MIN){
            cout<<"-1\n";
        }
        else{
            cout<<ans<<'\n';
        }
    }
    return 0;
}