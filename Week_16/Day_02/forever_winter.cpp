//https://codeforces.com/problemset/problem/1829/F
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        map<int,set<int>> g;
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            g[u].insert(v);
            g[v].insert(u);
        }
        int leaf = -1,parent_of_leaf= -1;
        for(int i=1;i<=n;i++){
            if(g[i].size()==1){
                leaf = i;
                parent_of_leaf = *g[i].begin();
                break;
            }
        }
        int x,y;
        y = g[parent_of_leaf].size()-1;
        for(auto val:g[parent_of_leaf]){
            if(g[val].size()>1){
                x = g[val].size();
            }
        }
        cout<<x<<" "<<y<<'\n';
    }
    return 0;
}