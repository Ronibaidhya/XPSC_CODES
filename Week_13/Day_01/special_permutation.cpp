//https://codeforces.com/problemset/problem/1612/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        vector<int> ans;           
        for(int i=b+1;i<=n;i++){
            ans.push_back(i);
        }
        for(int i=a;i<=b;i++){
            ans.push_back(i);
        }
        for(int i=1;i<a;i++){
            ans.push_back(i);
        }
        if(ans.size()==n){
            int mn = n;
            for(int i=0;i<n/2;i++){
                mn = min(mn,ans[i]);
            }
            int mx = 0;
            for(int i=n/2;i<n;i++){
                mx = max(mx,ans[i]);
            }
            if(mn==a && mx==b){
                for(auto x: ans){
                    cout<<x<<" ";
                }
                cout<<'\n';
            }
            else{
                cout<<"-1\n";
            }
        }
        else{
            cout<<"-1\n";
        }
    }
    return 0;
}