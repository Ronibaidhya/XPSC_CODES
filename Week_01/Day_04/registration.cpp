//https://codeforces.com/contest/4/problem/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    map<string,int> mp;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        mp[s]++;
        if(mp[s]==1){
            cout<<"OK\n";
        }
        else{
            cout<<s<<mp[s]-1<<'\n';
        }
    }
    return 0;
}