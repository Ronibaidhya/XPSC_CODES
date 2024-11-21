//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/D
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
    int  l=0,r=0;
    ll ans = 0;
    ll sum = 0;
    while(r<n){
        sum+=a[r];
        while(l<=r && sum>=k){
            ans+= n-r;
            sum-=a[l];
            l++;
        }
        r++;

    }
    cout<<ans;

    return 0;
}