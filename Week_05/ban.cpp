//https://codeforces.com/problemset/problem/1747/B
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
        int x = ceil(1.0*n/2);
        cout<<x<<'\n';
        int l = 1,r=(n*3);
        while(l<r){
            cout<<l<<" "<<r<<'\n';
            l+=3,r-=3;
        }
    }
    return 0;
}