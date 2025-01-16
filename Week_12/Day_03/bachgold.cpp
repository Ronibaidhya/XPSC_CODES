//https://codeforces.com/problemset/problem/749/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ans;
    if(n%2==0){
        ans = n/2;
        cout<<ans<<'\n';
        for(int i=0;i<ans;i++){
            cout<<2<<" ";
        }
        cout<<"\n";
    }
    else{
        ans = n/2;
        cout<<ans<<'\n';
        for(int i=0;i<ans-1;i++){
            cout<<2<<" ";
        }
        cout<<3<<'\n';
    }
    return 0;
}