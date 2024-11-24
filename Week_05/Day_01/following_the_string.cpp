//https://codeforces.com/problemset/problem/1927/B
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
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<char> a(n,'a');
        string s;
        for(int i=0;i<n;i++){
            s.push_back(a[v[i]]);
            a[v[i]]++;
        }
        cout<<s<<'\n';
    }
    return 0;
}