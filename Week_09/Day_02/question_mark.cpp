//https://codeforces.com/problemset/problem/1993/A
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
        map<char,int> mp;
        for(int i=1;i<=4*n;i++){
            char x;
            cin>>x;
            mp[x]++;
        }
        int cnt = 0;
        if(mp['A']>=n){
            cnt+=n;
        }
        else{
            cnt+=mp['A'];
        }
        if(mp['B']>=n){
            cnt+=n;
        }
        else{
            cnt+=mp['B'];
        }
        if(mp['C']>=n){
            cnt+=n;
        }
        else{
            cnt+=mp['C'];
        }
        if(mp['D']>=n){
            cnt+=n;
        }
        else{
            cnt+=mp['D'];
        }
        cout<<cnt<<'\n';
    }
    return 0;
}