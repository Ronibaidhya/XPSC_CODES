//https://codeforces.com/problemset/problem/26/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    int cnt = 0;
    for(int i=6;i<=n;i++){
        map<int,int> mp;
        int x = i;
        for(int j=2;j*j<=x;j++){
            while(x%j==0){
                mp[j]++;
                x/=j;
            }
        }
        if(x>1){
            mp[x]++;
        }
        if(mp.size()==2){
            cnt++;
        }
    }
    cout<<cnt<<'\n';
    return 0;
}