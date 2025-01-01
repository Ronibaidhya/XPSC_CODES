//https://codeforces.com/contest/706/problem/B
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
    sort(v.begin(),v.end());
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        auto it = upper_bound(v.begin(),v.end(),x);
        cout<<it-v.begin()<<'\n';
    }
    return 0;
}