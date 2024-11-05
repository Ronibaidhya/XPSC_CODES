//https://codeforces.com/problemset/problem/1702/C
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
        map<int,set<int>> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]].insert(i);
        }
        while(k--){
            int a,b;
            cin>>a>>b;
            auto ita = mp.find(a);
            auto itb = mp.find(b);
            if(ita!=mp.end() && itb!=mp.end()){
                int x = *mp[a].begin();
                int y = *mp[b].rbegin();
                if(x<y){
                    cout<<"YES\n";
                }
                else{
                    cout<<"NO\n";
                }
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}