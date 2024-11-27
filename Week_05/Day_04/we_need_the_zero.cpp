//https://codeforces.com/problemset/problem/1805/A
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
        int XOR = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            XOR^=v[i];
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            v[i] = v[i]^XOR;
            ans^=v[i];
        }
        if(ans==0){
            cout<<XOR<<'\n';
        }
        else{
            cout<<"-1\n";
        }
    }
    return 0;
}