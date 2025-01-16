//https://codeforces.com/problemset/problem/1881/D
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
        map<int,int> mp;
        for(int i=0;i<n;i++){
            for(int j=2;j*j<=v[i];j++){
                while(v[i]%j==0){
                    mp[j]++;
                    v[i]/=j;
                }
            }
            if(v[i]>1){
                mp[v[i]]++;
            }
        }
        bool flag = true;
        for(auto [x,y]:mp){
            if(y%n!=0){
                flag = false;
                break;
            }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}