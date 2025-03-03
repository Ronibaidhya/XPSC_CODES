//https://codeforces.com/problemset/problem/2014/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll leaf = (n*(n+1))/2;
        ll x = n-k;
        ll y = (x*(x+1))/2;
        leaf = leaf -y;
        if(leaf%2==0){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}