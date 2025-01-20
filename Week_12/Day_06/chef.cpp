//https://www.codechef.com/problems/CHAPD
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        while(true){
            ll x = __gcd(a,b);
            if(x==1){
                break;
            }
            else{
                b/=x;
            }
        }
        if(b==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}