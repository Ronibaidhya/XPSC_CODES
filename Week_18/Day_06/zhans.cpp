//https://codeforces.com/contest/2013/problem/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int s = 0;
        if(x<y){
            if(n%x==0){
                s+=n/x;
            }
            else{
                s+=n/x+1;
            }
        }
        else if(x>=y){
            if(n%y==0){
                s+=n/y;
            }
            else{
                s+=n/y+1;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}