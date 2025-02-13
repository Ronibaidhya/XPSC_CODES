//https://codeforces.com/problemset/problem/1907/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<string> ans;
        char x = s[1];
        for(char i='1';i<='8';i++){
            if(i!=x){
                string temp = {s[0],i};
                ans.push_back(temp);
            }
        }
        for(char i='a';i<='h';i++){
            if(i!=s[0]){
                string temp = {i,s[1]};
                ans.push_back(temp);
            }
        }
        for(auto val:ans){
            cout<<val<<'\n';
        }
    }
    return 0;
}