//https://atcoder.jp/contests/abc209/tasks/abc209_a?lang=en
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int a,b;
    cin>>a>>b;
    if(b-a<2){
        cout<<0<<"\n";
    }
    else{
        cout<<(b-a)+1<<'\n';
    }
    return 0;
}