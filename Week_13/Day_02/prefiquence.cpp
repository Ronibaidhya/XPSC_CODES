//https://codeforces.com/problemset/problem/1968/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        int k = 0;
        int i=0,j=0;
        while(i<n && j<m){
            if(a[i]==b[j]){
                k++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        cout<<k<<'\n';
    }
    return 0;
}