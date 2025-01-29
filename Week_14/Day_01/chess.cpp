//https://codeforces.com/problemset/problem/1973/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)%2!=0){
            cout<<"-1\n";
        }
        else{
            cout<<min((a+b+c)/2,a+b)<<'\n';
        }
    }
    return 0;
}