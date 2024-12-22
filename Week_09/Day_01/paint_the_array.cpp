//https://codeforces.com/problemset/problem/1618/C
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
        ll gcd1 = 0,gcd2 = 0;
        for(int i=0;i<n;i+=2){
            gcd1 = __gcd(gcd1,v[i]);
        }
        for(int i=1;i<n;i+=2){
            gcd2 = __gcd(gcd2,v[i]);
        }
        ll ans = 0;
        bool flag = true;
        for(int i=1;i<n;i+=2){
            if(v[i]%gcd1==0){
                flag = false;
                break;
            }
        }
        if(flag){
            ans = gcd1;
        }
        else{
            flag = true;
            for(int i=0;i<n;i+=2){
                if(v[i]%gcd2==0){
                    flag = false;
                    break;
                }
            }
            if(flag){
                ans = gcd2;
            }
            else{
                ans = 0;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}