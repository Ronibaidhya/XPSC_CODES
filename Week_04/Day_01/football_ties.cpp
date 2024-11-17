//https://www.codechef.com/problems/FOOTBALLTIES
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int a = min(x,y);
        cout<<a%3<<'\n';
    }
    return 0;
}