//https://codeforces.com/problemset/problem/1665/B
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
        map<int,int> mp;
        int mx = INT_MIN;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
            mx = max(mx,mp[v[i]]);
        }
        if(mx==n){
            cout<<"0\n";
            continue;
        }
        int x = mx;
        int cp = 0;
        while(x<n){
            cp++;
            x+=x;
        }
        cout<<cp+(n-mx)<<'\n';
    }
    return 0;
}