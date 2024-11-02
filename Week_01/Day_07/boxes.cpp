//https://codeforces.com/contest/903/problem/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    int mx = INT_MIN;
    for(auto [x,y]:mp){
        mx = max(mx,y);
    }
    cout<<mx;
    return 0;
}