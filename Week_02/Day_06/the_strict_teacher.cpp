//https://codeforces.com/problemset/problem/2005/B2
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m,q;
        cin>>n>>m>>q;
        set<int> s;
        while(m--){
            int x;
            cin>>x;
            s.insert(x);
        }
        while(q--){
            int st;
            cin>>st;
            auto it = s.upper_bound(st);
            if(it==s.begin()){
                cout<<*s.begin()-1<<'\n';
            }
            else if(it==s.end()){
                cout<<n-*s.rbegin()<<'\n';
            }
            else{
                auto u = it;
                // int ans = min((*u-st),(st-*(--it)));
                int ans = (*u-*(--it))/2;
                cout<<ans<<'\n';
            }
        }
    }
    return 0;
}
