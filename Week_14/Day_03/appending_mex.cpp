//https://codeforces.com/problemset/problem/1054/B
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
    int ans = -1;
    int x = -1;
    for(int i=0;i<n;i++){
        if(v[i]>x+1){
            ans = i+1;
            break;
        }
        x = max(x,v[i]);
    }
    cout<<ans<<'\n';
    return 0;
}