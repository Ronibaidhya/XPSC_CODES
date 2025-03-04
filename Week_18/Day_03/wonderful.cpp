//https://codeforces.com/problemset/problem/1551/B2
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
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(mp[v[i]].size()<k){
                mp[v[i]].push_back(i);
            }
        }
        int sz = 0;
        for(auto [x,y]:mp){
            sz+=y.size();
        }
        sz = sz - (sz%k);
        int c = 1;
        vector<int> ans(n,0);
        for(auto [x,y]:mp){
            bool flag = true;
            for(auto val:y){
                if(c>k){
                    c=1;
                }
                ans[val] = c++;
                sz--;
                if(sz==0){
                    flag = false;
                    break;
                }
            }
            if(!flag){
                break;
            }
        }
        for(auto val:ans){
            cout<<val<<" ";
        }
        cout<<'\n';
    }
    return 0;
}