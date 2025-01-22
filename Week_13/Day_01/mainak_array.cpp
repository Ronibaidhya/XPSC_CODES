//https://codeforces.com/problemset/problem/1726/A
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
        int ans = INT_MIN;
        for(int i=0;i<n-1;i++){
            ans = max(ans,v[n-1]-v[i]);
        }
        for(int i=1;i<n;i++){
            ans = max(ans,v[i]-v[0]);
        }
        for(int i=1;i<n;i++){
            ans = max(ans,v[i-1]-v[i]);
        }
        if(ans==INT_MIN){
            cout<<"0\n";
        }
        else{
            cout<<ans<<'\n';
        }
    }
    return 0;
}