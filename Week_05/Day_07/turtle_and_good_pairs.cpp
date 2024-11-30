//https://codeforces.com/problemset/problem/2003/C
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
        string s;
        cin>>s;
        map<char,int> mp;
        for(char x:s){
            mp[x]++;
        }
        while(true){
            bool flag = true;
            for(auto it=mp.begin();it!=mp.end();it++){
                if(it->second>0){
                    cout<<it->first;
                    it->second--;
                    flag = false;
                }
            }
            if(flag) break;
        }
        cout<<'\n';
    }
    return 0;
}