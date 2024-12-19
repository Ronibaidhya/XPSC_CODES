//https://codeforces.com/problemset/problem/1582/B
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
        int z=0,o=0;
        ll sum = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
            if(v[i]==1){
                o++;
            }
            if(v[i]==0){
                z++;
            }
        }
        ll ans = (1LL<<z)*o;
        cout<<ans<<'\n';
    }
    return 0;
}