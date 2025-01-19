//https://codeforces.com/problemset/problem/1902/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        set<ll> s;
        ll mx = INT_MIN;
        for(int i=0;i<n;i++){
            cin>>v[i];
            s.insert(v[i]);
            mx = max(mx,v[i]);
        }
        ll gd = 0;
        for(int i=0;i<n;i++){
            gd = __gcd(gd,(mx-v[i]));
        }

        ll x = mx; //a(n+1) value
        
        bool flag = false;
        for(int i=0;i<n;i++){
            auto it = s.find(x);
            if(it==s.end()){
                flag = true;
                break;
            }
            x-=gd;
        }
        if(!flag){
            x = mx+gd;
            mx = x;
        }

        if(n==1){
            cout<<1<<'\n';
        }
        else{
            ll ans = 0;
            for(int i=0;i<n;i++){
                ans+=(mx-v[i])/gd;
            }
            ans+=abs(mx-x)/gd;
            cout<<ans<<'\n';
            // cout<<gd<<" "<<x<<" "<<mx<<"\n";
        }
        
    }
    return 0;
}