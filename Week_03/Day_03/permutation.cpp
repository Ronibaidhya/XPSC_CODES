//https://codeforces.com/problemset/problem/1790/C
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
        vector<vector<int>> v;
        for(int i=0;i<n;i++){
            vector<int> x;
            for(int j=0;j<(n-1);j++){
                int a;
                cin>>a;
                x.push_back(a);
            }
            v.push_back(x);
        }
        
        int x = v[0].size();
        vector<map<int,int>> mp;
        for(int i=0;i<x;i++){
            map<int,int> m;
            for(int j=0;j<v.size();j++){
                m[v[j][i]]++;
            }
            mp.push_back(m);
        }
        vector<int> ans(n);
        int sz = mp.size();
        for(int i =0;i<(sz/2);i++){

            vector<pair<int,int>> m;
            for(auto [d,e]:mp[i]){
                m.push_back({e,d});
            }

            sort(m.begin(),m.end());
            ans[i] = m[1].second;
            ans[i+1] = m[0].second;


            vector<pair<int,int>> z;
            for(auto [d,e]:mp[sz-i-1]){
                z.push_back({e,d});
            }

            sort(z.begin(),z.end());
            ans[n-i-1] = z[1].second;
            ans[n-i-2] = z[0].second;

        }

        for(int z:ans){
            cout<<z<<" ";
        }
        cout<<endl;
    }
    return 0;
}