//https://codeforces.com/problemset/problem/637/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<string,bool> mp;
    for(int i=(n-1);i>=0;i--){
        auto it = mp.find(v[i]);
        if(it==mp.end()){
            mp[v[i]] = true;
            cout<<v[i]<<endl;
        }
    }
    return 0;
}