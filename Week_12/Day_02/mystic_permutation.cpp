//https://codeforces.com/problemset/problem/1689/B
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
        set<int> s;
        for(int i=0;i<n;i++){
            cin>>v[i];
            s.insert(v[i]);
        }
        if(n==1){
            cout<<-1<<'\n';
        }
        else{
            vector<int> ans(n);
            for(int i=0;i<n-1;i++){
                auto it = s.begin();
                if(*it==v[i]){
                    it++;
                }
                ans[i] = *it;
                s.erase(it);
            }
            ans[n-1] = *s.begin();
            if(v[n-1]==ans[n-1]){
                swap(ans[n-1],ans[n-2]);
            }
            for(auto val:ans){
                cout<<val<<" ";
            }
            cout<<'\n';
        }
    }
    return 0;
}