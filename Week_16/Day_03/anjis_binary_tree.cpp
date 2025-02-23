//https://codeforces.com/problemset/problem/1900/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int maxN = 3e5+9;
vector<int> g[maxN] , op(maxN);
string s;

void dfs(int u){
    if(g[u][0]){
        int v = g[u][0];
        if(s[u-1]!='L'){
            op[v] = op[u]+1;
        }
        else{
            op[v] = op[u];
        }
        dfs(v);
    }
    if(g[u][1]){
        int v = g[u][1];
        if(s[u-1]!='R'){
            op[v] = op[u]+1;
        }
        else{
            op[v] = op[u];
        }
        dfs(v);
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cin>>s;
        for(int i=0;i<=n;i++){
            g[i].clear();
            op[i] = 0;
        }
        for(int i=1;i<=n;i++){
            int l,r;
            cin>>l>>r;
            g[i].push_back(l);
            g[i].push_back(r);
        }
        dfs(1);
        int ans = INT_MAX;
        for(int i=1;i<=n;i++){
            if(g[i][0]==0 && g[i][1]==0){
                ans = min(ans,op[i]);
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}