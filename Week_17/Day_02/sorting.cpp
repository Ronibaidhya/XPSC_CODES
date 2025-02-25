//https://codeforces.com/problemset/problem/1891/A
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
        bool flag = true;
        for(int i=3;i<n;i++){
            if(i!=4 && i!=8 && i!=16){
                if(v[i]>v[i+1]){
                    flag = false;
                    break;
                }
            }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}