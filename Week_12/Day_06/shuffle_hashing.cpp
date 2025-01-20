//https://codeforces.com/problemset/problem/1278/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string p,h;
        cin>>p>>h;
        bool flag = false;
        map<char,int> mp;
        for(int i=0;i<p.size();i++){
            mp[p[i]]++;
        }
        if(p.size()>h.size()){
            cout<<"NO\n";
            continue;
        }
        for(int i=0;i<=h.size()-p.size();i++){
            map<char,int> tmp;
            tmp.clear();
            for(int j=i;j<p.size()+i;j++){
                tmp[h[j]]++;
            }
            bool a = true;
            for(auto [x,y]:mp){
                if(tmp[x]!=y){
                    a = false;
                    break;
                }
                // cout<<x<<" "<<y<<'\n';
            }
            if(a){
                flag = true;
                break;
            }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}