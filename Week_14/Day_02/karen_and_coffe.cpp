//https://codeforces.com/problemset/problem/816/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 2e5+3;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,k,q;
    cin>>n>>k>>q;
    vector<int> v(N),d(N),ans(N),pref(N);
    while(n--){
        int l,r;
        cin>>l>>r;
        v[l]++;
        v[r+1]--;
    }
    for(int i=1;i<N;i++){
        d[i] = d[i-1]+v[i];
        if(d[i]>=k){
            ans[i]++;
        }
        pref[i] = pref[i-1]+ans[i];
    }
    // for(int i=90;i<=100;i++){
    //     cout<<pref[i]<<" ";
    // }
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<pref[r]-pref[l-1]<<'\n';
    }
    return 0;
}