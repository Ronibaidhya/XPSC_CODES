//https://codeforces.com/contest/474/problem/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> a(n);
    a[0] = v[0];
    for(int i=1;i<n;i++){
        a[i] = a[i-1]+v[i];
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        auto it = lower_bound(a.begin(),a.end(),x);
        cout<<it-a.begin()+1<<'\n';
    }
    return 0;
}