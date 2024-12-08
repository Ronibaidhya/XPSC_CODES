//https://phitron.io/xpsc155/video/xpsc155-7-maximal-and
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll check_kth_bit_on_or_off(ll n,ll k){
    return (n>>k)&1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<ll> v(n);
        ll maxBit = 30;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<ll> bits(maxBit+1);
        for(auto val:v){
            for(int j=maxBit;j>=0;j--){
                if((val>>j)&1){
                    bits[j]++;
                }
            }
        }
        ll ans = 0;
        for(int i=maxBit;i>=0;i--){
            if(bits[i]==n){
                ans+=(1LL<<i);
            }
            else{
                ll dif = n-bits[i];
                if(k>=dif){
                    k-=dif;
                    ans+=(1LL<<i);
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}