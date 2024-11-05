//https://codeforces.com/problemset/problem/368/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int> v(n+1);
    set<int> s;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    vector<int> ans(n+1);
    for(int i=n;i>0;i--){
        s.insert(v[i]);
        ans[i] = s.size();
    }
    for(int i=0;i<m;i++){
        int l;
        cin>>l;
        // set<int> s;
        // for(int j=l;j<=n;j++){
        //     s.insert(v[j]);
        // }
        // cout<<s.size()<<'\n';
        cout<<ans[l]<<'\n';
    }
    return 0;
}