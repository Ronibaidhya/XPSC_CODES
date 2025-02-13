//https://codeforces.com/problemset/problem/1796/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        // vector<string> ans;
        int idx = -1;
        string ans;
        bool flag = false;
        for(int i=0;i<a.size()-1;i++){
            for(int j=0;j<b.size()-1;j++){
                if(a[i]==b[j] && a[i+1]==b[j+1]){
                    flag = true;
                    ans = a.substr(i,2);
                }
            }
        }
        if(flag){
            cout<<"YES\n";
            cout<<"*"<<ans<<"*"<<'\n';
        }
        else{
            if(a[0]==b[0]){
                cout<<"YES\n";
                cout<<a[0]<<"*\n";
            }
            else if(a.back()==b.back()){
                cout<<"YES\n";
                cout<<"*"<<a.back()<<'\n';
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}