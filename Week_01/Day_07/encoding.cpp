//https://codeforces.com/contest/1974/problem/B
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
        string aux;
        
        for(char x:s){
            auto it = mp.find(x);
            if(it==mp.end()){
                mp[x]=0;
            }
        }

        int a=0;
        for(auto it = mp.begin();it!=mp.end();it++){
            char x = it->first;
            aux.push_back(x);
            mp[x] = a;
            a++;
        }

        int sz = mp.size()-1;
        for(int i=0;i<n;i++){
            auto it =mp.find(s[i]);
            int x = it->second;
            s[i] = aux[sz-x];
        }
        cout<<s<<endl;
    }
    return 0;
}