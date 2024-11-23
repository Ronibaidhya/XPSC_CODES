//https://codeforces.com/problemset/problem/1729/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n =s.size();
        map<char,set<int>> mp;
        for(int i=0;i<n;i++){
            mp[s[i]].insert(i+1);
        }
        char f =s[0], l = s[n-1];
        vector<int> ans;
        int sum = 0;
        if(f==l){
            for(auto it : mp[f]){
                ans.push_back(it);
            }
        }
        else if(f<l){
            auto it = mp.find(f);
            while(1){
                for(auto i:it->second){
                    ans.push_back(i);
                }
                if(it->first!=f){
                    auto p = it;
                    --p;
                    sum+= abs(it->first-p->first);
                }
                if(it->first==l) break;
                it++;
            }
        }
        else{
            auto it = mp.find(f);
            while(1){
                for(auto i:it->second){
                    ans.push_back(i);
                }
                if(it->first!=f){
                    auto p = it;
                    ++p;
                    sum+= abs(it->first-p->first);
                }
                if(it->first==l) break;
                it--;
            }
        }
        cout<<sum<<" "<<ans.size()<<'\n';
        for(int x:ans){
            cout<<x<<" ";
        }
        cout<<'\n';
    }
    return 0;
}