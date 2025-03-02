//https://codeforces.com/problemset/problem/1870/C
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
        set<int> s;
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            s.insert(i);
            mp[v[i]].push_back(i);
        }
        vector<int> ans(k+1,0);
        auto it = mp.begin();
        while(it!=mp.end()){
            int x = *s.begin();
            int y = *s.rbegin();
            ans[it->first] = 2*(y-x+1);
            for(auto val:it->second){
                s.erase(val);
            }
            it++;
        }
        for(int i=1;i<=k;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}