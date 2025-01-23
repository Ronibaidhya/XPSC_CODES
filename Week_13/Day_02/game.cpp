//https://codeforces.com/problemset/problem/1337/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x,n,m;
        cin>>x>>n>>m;
        while(x>20 && n>0){
            x = (x/2)+10;
            n--;
        }
        x-=(m*10);
        if(x>0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}