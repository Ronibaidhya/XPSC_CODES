//https://codeforces.com/problemset/problem/1675/B
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
        int ans = 0;
        for(int i=(n-2);i>=0;i--){
            while(v[i]>=v[i+1] && v[i]>0){
                v[i] = v[i]/2;
                ans++;
            }
            if(v[i]==v[i+1]){
                ans = -1;
                break;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}