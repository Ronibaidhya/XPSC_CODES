//https://codeforces.com/problemset/problem/1987/B
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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<ll> dif;
        ll f = v[0];
        for(int i=1;i<n;i++){
            if(v[i]>=f){
                f = v[i];
            }
            else{
                dif.push_back(f-v[i]);
            }
        }
        if(dif.size()==0){
            cout<<"0\n";
        }
        else{
            sort(dif.begin(),dif.end());
            ll x = dif.size();
            ll ans = (x+1)*dif[0];
            for(int i=1;i<dif.size();i++){
                ans+=((x-i+1)*(dif[i]-dif[i-1]));
                // cout<<ans<<" ";
            }
            cout<<ans<<'\n';
        }
        
    }
    return 0;
}