//https://codeforces.com/contest/855/problem/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    map<string,bool> mp;
    while(t--){
        string s;
        cin>>s;
        auto it = mp.find(s);
        if(it==mp.end()){
            mp[s]=true;
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}