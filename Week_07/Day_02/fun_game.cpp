//https://codeforces.com/problemset/problem/1994/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int q;
    cin>>q;
    while(q--){
        int n;
        string s,t;
        cin>>n>>s>>t;
        if(s==t || s[0]=='1'){
            cout<<"YES\n";
            continue;
        }

        int pos = -1;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                pos = i;
                break;
            }
        }
        if(pos!=-1){
            bool flag = true;
            for(int i=0;i<n;i++){
                if(s[i]!=t[i]){
                    if(pos>i){
                        flag = false;
                        break;
                    }
                }
            }
            if(flag) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}