//https://codeforces.com/problemset/problem/1559/A
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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans = v[0];
        for(int i=1;i<n;i++){
            ans&=v[i];
        }
        cout<<ans<<'\n';
    }
    return 0;
}