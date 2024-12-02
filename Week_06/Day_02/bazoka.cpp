//https://codeforces.com/problemset/problem/1975/A
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
        int pos;
        bool flag = true;
        for(int i=0;i<(n-1);i++){
            if(v[i]>v[i+1]){
                flag = false;
                pos = i;
                break;
            }
        }
        if(flag){
            cout<<"YES\n";
        }
        else{
            bool x = true;
            for(int i=(pos+1);i<(n-1);i++){
                if(v[i]>v[i+1]){
                    x = false;
                    break;
                }
            }
            if(v[0]<v[n-1]){
                x = false;
            }
            if(x) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}