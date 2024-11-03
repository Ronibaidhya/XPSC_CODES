//https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string s,t;
    cin>>s>>t;
    int ans =0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=t[i]){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}