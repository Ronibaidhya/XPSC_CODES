//https://codeforces.com/problemset/problem/1883/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int> mp;
        for(char x:s){
            mp[x]++;
        }
        int cnt = 0;
        for(auto[x,y]:mp){
            if(y%2!=0){
                cnt++;
            }
        }
        if(cnt<=(k+1)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}