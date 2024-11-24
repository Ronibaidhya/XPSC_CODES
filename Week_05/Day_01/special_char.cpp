//https://codeforces.com/problemset/problem/1948/A
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
        if(n%2!=0){
            cout<<"NO\n";
        }
        else{
            char a ='A';
            int x = n/2;
            string s;
            for(int i=0;i<x;i++){
                s.push_back(a+i);
                s.push_back(a+i);
            }
            cout<<"YES\n";
            cout<<s<<'\n';
        }
    }
    return 0;
}