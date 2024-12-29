//https://cses.fi/problemset/task/1755
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string s;
    cin>>s;
    int n = s.size();
    map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    int cnt = 0;
    for(auto [x,y]:mp){
        if(y%2!=0){
            cnt++;
        }
    }
    bool flag = true;
    if(n%2==0 && cnt!=0){
        flag = false;
    }
    if(n%2!=0 && cnt>1){
        flag = false;
    }
    if(flag){
        string f,m,l;
        for(auto[x,y]:mp){
            if(y%2==0){
                for(int i=0;i<y/2;i++){
                    f.push_back(x);
                    l.push_back(x);
                }
            }
            else{
                for(int i=0;i<y;i++){
                    m.push_back(x);
                }
            }
        }
        reverse(l.begin(),l.end());
        cout<<f<<m<<l<<'\n';
    }
    else{
        cout<<"NO SOLUTION\n";
    }
    return 0;
}