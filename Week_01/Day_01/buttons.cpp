//https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<(2*a)-1<<'\n';
    }
    else if(a<b){
        cout<<(2*b)-1<<'\n';
    }
    else{
        cout<<a+b<<'\n';
    }
    return 0;
}