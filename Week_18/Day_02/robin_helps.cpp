//https://codeforces.com/problemset/problem/2014/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int v[n];
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int r = 0;
        int p = 0;
        for(int i = 0;i<n;i++){
            if(v[i]>=k){
                r+=v[i];
                v[i] = 0;
            }
            else if(v[i]==0 && r>0){
                r--;
                p++;
            }
        }
        cout<<p<<endl;
    }
    return 0;
}