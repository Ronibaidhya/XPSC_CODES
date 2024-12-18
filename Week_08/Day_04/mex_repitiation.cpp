//https://codeforces.com/problemset/problem/1863/C
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
        vector<bool> m(n+1,false);
        for(int i=0;i<n;i++){
            cin>>v[i];
            m[v[i]] = true;
        }
        int mex = -1;
        for(int i=0;i<=n;i++){
            if(m[i]==false){
                mex = i;
                break;
            }
        }
        int x = -1;
        if(k>=(n+1)){
            x = k%(n+1);
        }
        else{
            x = k;
        }
        vector<int> ans(n+1);
        if(x==0){
            for(auto val:v){
                cout<<val<<" ";
            }
        }
        else{
            int temp = (n-1);
            for(int i=(x-1);i>=1;i--){
                ans[i] = v[temp];
                temp--;
            }
            ans[x] = mex;
            int j = 0;
            for(int i=x+1;i<=n;i++){
                ans[i] = v[j];
                j++;
            }
            for(int i=1;i<=n;i++){
                cout<<ans[i]<<" ";
            }
        }
        cout<<'\n';
    }
    return 0;
}