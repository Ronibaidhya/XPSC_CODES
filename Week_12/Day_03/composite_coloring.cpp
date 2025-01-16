//https://codeforces.com/problemset/problem/1332/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<int> primes = {2,3,5,7,11,13,17,19,23,29,31};

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
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<11;j++){
                if(v[i]%primes[j]==0){
                    mp[primes[j]].push_back(i);
                    break;
                }
            }
        }
        vector<int> ans(n);
        int color = 1;
        for(auto [x,y]:mp){
            for(auto val:y){
                ans[val] = color;
            }
            color++;
        }
        cout<<color-1<<"\n";
        for(auto val:ans){
            cout<<val<<" ";
        }
        cout<<'\n';
    }
    return 0;
}