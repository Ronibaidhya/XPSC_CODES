//https://codeforces.com/problemset/problem/1654/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v(n);
        multiset<ll> ml;
        ll sum = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            ml.insert(v[i]);
            sum+=v[i];
        }
        priority_queue<ll> pq;
        pq.push(sum);
        multiset<ll> tmp,ans;
        ans = ml;
        for(int i=0;i<n-1;i++){
            ll x = pq.top();
            auto it = ml.find(x/2);
            if(it!=ml.end()){
                ml.erase(it);
                tmp.insert(x/2);
            }
            else{
                pq.push(x/2);
            }
            ll a = ceil(1.0*x/2);
            it = ml.find(a);
            if(it!=ml.end()){
                ml.erase(it);
                tmp.insert(a);
            }
            else{
                pq.push(a);
            }
            pq.pop();
        }
        while(!pq.empty()){
            tmp.insert(pq.top());
            pq.pop();
        }
        // for(auto val:tmp){
        //     cout<<val<<" ";
        // }
        // cout<<'\n';
        if(ans==tmp){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}