//https://codeforces.com/problemset/problem/1806/B
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
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        if(mp[0]<=ceil(1.0*n/2)){
            cout<<"0\n";
        }
        else if(mp.upper_bound(1)!=mp.end()||mp[0]==n){
            cout<<"1\n";
        }
        else{
            cout<<"2\n";
        }
    }
    return 0;
}