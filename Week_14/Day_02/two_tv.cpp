//https://codeforces.com/problemset/problem/845/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<int,int> mp;
    while(n--){
        int l,r;
        cin>>l>>r;
        mp[l]++;
        mp[r+1]--;
    }
    ll sum = 0;
    bool flag = true;
    for(auto [x,y]:mp){
        sum+=y;
        if(sum>2){
            flag = false;
            break;
        }
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}