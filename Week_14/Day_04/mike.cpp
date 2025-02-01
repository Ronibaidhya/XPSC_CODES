#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<int,int> mp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            mp[v[i]+v[j]]++;
        }
    }
    int ans = 0;
    for(auto [x,y]:mp){
        ans = max(ans,y);
    }
    cout<<ans<<'\n';
    return 0;
}