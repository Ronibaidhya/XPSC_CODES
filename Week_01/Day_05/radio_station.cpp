//https://codeforces.com/contest/918/problem/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    map<string,string> mp1;
    while(n--){
        string a,b;
        cin>>a>>b;
        mp1[b] = a;
    }
    while(m--){
        string a,b;
        cin>>a>>b;
        b.pop_back();
        cout<<a<<" "<<b<<"; #"<<mp1[b]<<'\n';
    }
    return 0;
}