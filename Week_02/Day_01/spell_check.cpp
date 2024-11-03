//https://codeforces.com/problemset/problem/1722/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int q;
    cin>>q;
    string ans = "Timru";
    while(q--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n>5 || n<5){
            cout<<"NO\n";
            continue;
        }
        sort(s.begin(),s.end());
        if(ans==s){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}