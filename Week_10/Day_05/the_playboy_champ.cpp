//https://vjudge.net/problem/UVA-10611
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int q;
    cin>>q;
    while(q--){
        ll x;
        cin>>x;
        auto it = lower_bound(v.begin(),v.end(),x);
        auto it1 = upper_bound(v.begin(),v.end(),x);
        if(it==v.begin()){
            cout<<"X ";
        }
        else{
            it--;
            cout<<*it<<" ";
        }
        if(it1!=v.end()){
            cout<<*it1<<'\n';
        }
        else{
            cout<<"X\n";
        }
    }
    return 0;
}

