//https://codeforces.com/problemset/problem/1925/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        char x = 'a';
        while(k--){
            s.push_back(x);
            x++;
        }
        for(int i=0;i<n;i++){
            cout<<s;
        }
        cout<<'\n';
    }
    return 0;
}