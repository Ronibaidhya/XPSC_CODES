//https://codeforces.com/problemset/problem/1729/A
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
        int x = a-1;
        int y = abs(c-b) + (c-1);
        if(x>y){
            cout<<"2\n";
        }
        else if(x<y){
            cout<<"1\n";
        }
        else{
            cout<<"3\n";
        }
    }
    return 0;
}