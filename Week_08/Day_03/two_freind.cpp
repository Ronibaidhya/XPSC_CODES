//https://codeforces.com/problemset/problem/1969/A
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
        vector<int> v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        int ans = 3;
        for(int i=1;i<=n;i++){
            if(v[v[i]]==i){
                ans = 2;
                break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}