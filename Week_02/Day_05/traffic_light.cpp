//https://codeforces.com/problemset/problem/1744/C
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
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        string a = s+s;
        map<char,set<int>> mp;
        int mx = INT_MIN;
        for(int i=0;i<a.size();i++){
            mp[a[i]].insert(i);
        }
        for(auto val : mp[c]){
            auto it = mp['g'].lower_bound(val);
            if(it!=mp['g'].end()){
                mx = max(mx,(*it-val));
            }
        }
        cout<<mx<<'\n';
    }
    return 0;
}