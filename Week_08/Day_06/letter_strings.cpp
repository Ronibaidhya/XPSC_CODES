//https://codeforces.com/problemset/problem/1669/E
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
        vector<string> v;
        map<string,int> mp;
        map<char,int> mp1;
        map<char,int> mp2;
        for(int i=0;i<n;i++){
            string x;
            cin>>x;
            v.push_back(x);
            mp[x]++;
            mp1[x[0]]++;
            mp2[x[1]]++;
        }
        ll ans = 0;
        for(string s:v){
            ll x = mp1[s[0]] - mp[s];
            ans+=x;
            x = mp2[s[1]] - mp[s];
            ans+=x;
            if(mp[s]>0) mp[s]--;
            if(mp1[s[0]]>0) mp1[s[0]]--;
            if(mp2[s[1]]>0) mp2[s[1]]--;
        }
        cout<<ans<<'\n';
    }
    return 0;
}