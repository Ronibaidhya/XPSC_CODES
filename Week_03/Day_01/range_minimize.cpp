//https://www.codechef.com/problems/MNR
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
        sort(v.begin(),v.end());
        int mn = INT_MAX;
        mn = min(mn,v[n-1]-v[2]);
        mn = min(mn,v[n-3]-v[0]);
        mn = min(mn,v[n-2]-v[1]);
        cout<<mn<<'\n';
    }
    return 0;
}