//https://codeforces.com/contest/2000/problem/D
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
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        string s;
        cin>>s;
        vector<ll> sum(n);
        sum[0] = v[0];
        for(int i=1;i<n;i++){
            sum[i] = sum[i-1]+v[i];
        }
        ll ans = 0;
        int l=0,r=n-1;
        while(l<r){
            if(s[l]=='L' && s[r]=='R'){
                if(l==0){
                    ans+=sum[r];
                }
                else{
                    ans+= (sum[r]-sum[l-1]);
                }
                l++,r--;
            }
            if(s[l]!='L'){
                l++;
            }
            else if(s[r]!='R'){
                r--;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}