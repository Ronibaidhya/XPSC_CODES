//https://codeforces.com/problemset/problem/1856/B
#include <bits/stdc++.h>
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
        ll sum = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
            mp[v[i]]++;
        }
        if(sum>=(mp[1]+n) && n>1) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}

