//https://codeforces.com/problemset/problem/1692/F
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
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]%10]++;
        }
        vector<int> ans;
        for(auto [x,y]:mp){
            for(int i=0;i<min(y,3);i++){
                ans.push_back(x);
            }
        }
        bool flag = false;
        for(int i=0;i<ans.size()-2;i++){
            for(int j=i+1;j<ans.size()-1;j++){
                for(int k=j+1;k<ans.size();k++){
                    ll x = ans[i]+ans[j]+ans[k];
                    if(x%10==3){
                        flag = true;
                        break;
                    }
                }
            }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}