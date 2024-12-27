//https://codeforces.com/problemset/problem/1389/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int LCM(int x,int y){
    return (x/__gcd(x,y))*y;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int lcm = LCM(l,l*2);
        if(l*2<=r && l<=lcm && lcm<=r){
            cout<<l<<" "<<l*2<<"\n";
        }
        else{
            cout<<-1<<" "<<-1<<'\n';
        }
        // cout<<lcm<<'\n';
    }
    return 0;
}