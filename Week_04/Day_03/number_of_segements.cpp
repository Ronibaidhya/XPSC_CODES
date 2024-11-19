//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l =0,r=0;
    ll ans = 0;
    ll sum = 0;
    while(r<n){
        sum+=a[r];
        if(sum<=k){
            ans+=(r-l+1);
        }
        else{
            while(l<n && sum>k){
                sum-=a[l];
                l++;
            }
            if(sum<=k){
                ans+=(r-l+1);
            }
        }
        r++;
    }
    cout<<ans;
    return 0;
}