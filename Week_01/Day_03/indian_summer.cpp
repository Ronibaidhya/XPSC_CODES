//https://codeforces.com/contest/44/problem/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    map<pair<string,string>,bool> mp;
    int t;
    cin>>t;
    while(t--){
        string tree,colour;
        cin>>tree>>colour;
        mp[{tree,colour}] = true;
    }
    cout<<mp.size();
    return 0;
}