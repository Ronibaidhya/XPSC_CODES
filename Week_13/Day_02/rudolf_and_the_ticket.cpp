//https://codeforces.com/problemset/problem/1941/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> a(n);
        vector<int> b(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        ll cnt = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i]+b[j]<=k){
                    cnt++;
                }
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}