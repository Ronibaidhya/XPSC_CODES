//https://codeforces.com/problemset/problem/762/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    set<ll> s;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            s.insert(i);
            s.insert(n/i);
        }
    }
    auto it = s.begin();
    k--;
    while(k-- && it!=s.end()){
        it++;
    }
    if(it==s.end()){
        cout<<-1<<'\n';
    }
    else{
        cout<<*it<<'\n';
    }
    return 0;
}