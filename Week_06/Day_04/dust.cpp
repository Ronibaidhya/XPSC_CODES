//https://codeforces.com/problemset/problem/1705/B
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
        ll cnt = 0;
        bool flag = false;
        for(int i=0;i<(n-1);i++){
            if(v[i]==0 && flag){
                cnt++;
            }
            else if(v[i]!=0){
                flag = true;
                cnt+=v[i];
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}