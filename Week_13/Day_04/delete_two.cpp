//https://codeforces.com/problemset/problem/1598/C
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
        ll sum = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        ll ans = 0;
        if((2*sum)%n==0){
            map<int,int> mp;
            for(int i=0;i<n;i++){
                int x = ((2*sum)/n) - v[i];
                if(mp.find(x)!=mp.end()){
                    ans+=mp[x];
                }
                mp[v[i]]++;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}