//https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int a,b,c;
    cin>>a>>b>>c;

    for(int i=1;i<=1000;i++){
        ll x = c*i;
        if(x>=a && x<=b){
            cout<<x<<endl;
            return 0 ;
        }
    }
    cout<<-1;
    return 0;
}