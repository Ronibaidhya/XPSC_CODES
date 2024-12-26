//https://codeforces.com/problemset/problem/1872/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int fun (int n){
    if(n==1){
        return -1;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return i;
        }
    }
    return -1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int x;
        if(l==r) x = l;
        else if(r%2==0) x = r;
        else if((r-1)%2==0) x = r-1;

        int d = fun(x);
        if(d==-1){
            cout<<"-1\n";
        }
        else{
            cout<<d<<" "<<x-d<<'\n';
        }
    }
    return 0;
}