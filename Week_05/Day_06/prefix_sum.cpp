//https://codeforces.com/problemset/problem/1738/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> v(k);
        priority_queue<ll,vector<ll>,greater<ll>> pq;
        for(int i=0;i<k;i++){
            cin>>v[i];
        }
        if(k==1){
            cout<<"YES\n";
            continue;
        }
        bool flag = true;
        for(int i=(k-1);i>=1;i--){
            ll x = v[i]-v[i-1];
            pq.push(x);
            if(pq.top()!=x){
                flag = false;
                break;
            }
        }
        if(flag==false){
            cout<<"NO\n";
            continue;
        }
        ll s = v[0];
        ll x = n-k;
        while(x--){
            s-=pq.top();
        }
        pq.push(s);
        if(flag && pq.top()==s){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}