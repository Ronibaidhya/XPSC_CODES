//https://codeforces.com/contest/1991/problem/B
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
        vector<int> v(n-1);
        for(int i=0;i<n-1;i++){
            cin>>v[i];
        }
        vector<int> ans(n);
        ans[0] = v[0];
        for(int i=1;i<(n-1);i++){
            ans[i] = v[i-1]|v[i];
        }
        ans[n-1] = v[n-2];
        bool flag = true;
        for(int i=0;i<n-1;i++){
            int x = (ans[i]&ans[i+1]);
            if(x!=v[i]){
                flag = false;
                break;
            }
        }
        if(flag){
            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<'\n';
        }
        else{
            cout<<"-1\n";
        }
    }
    return 0;
}