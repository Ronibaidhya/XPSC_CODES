//https://codeforces.com/problemset/problem/501/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    // map<string,string> mp;


    // int t;
    // cin>>t;
    // while(t--){
    //     string a,b;
    //     cin>>a>>b;
    //     mp[a] = b;
    // }
    // for(auto [x,y]: mp){
    //     // cout<<x<<" "<<y<<endl;
    //     auto it = mp.find(y);
    //     while(it!=mp.end()){
    //         mp[x] = it->second;
    //         mp.erase(it);
    //         it = mp.find(it->second);
    //     }
    // }
    // cout<<mp.size()<<endl;
    // for(auto[x,y]:mp){
    //     cout<<x<<" "<<y<<endl;
    // }


    map<string,string> a,b;
    int n;
    cin>>n;
    while(n--){
        string x,y;
        cin>>x>>y;
        if(b.find(x)!=b.end()){
            string s = b[x];
            a[s] = y;
            b.erase(x);
            b[y] = s;
        }
        else{
            a[x] = y;
            b[y] = x;
        }
    } 
    cout<<a.size()<<endl;
    for(auto[x,y]:a){
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}