//https://cses.fi/problemset/task/1660
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,z;
    cin>>n>>z;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int l=0,r=0;
    ll ans=0,sum=0;
    while(r<n){
        sum+=v[r];
        if(sum==z){
            ans++;
        }
        else{
            while(l<=r && sum>z){
                sum-=v[l];
                l++;
            }
            if(sum==z){
                ans++;
            }
        }
        r++;
    }
    cout<<ans;
    return 0;
}