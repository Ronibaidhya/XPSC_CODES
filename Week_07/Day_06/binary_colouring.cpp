//https://codeforces.com/problemset/problem/1977/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int mx = __lg(n);
        vector<int> v(32,0);
        for(int i=0;i<=mx;i++){
            int temp = (n>>i)&1;
            v[i] = temp;
        }
        int i = 0;
        while(i<32){
            if(v[i]!=1){
                i++;
                continue;
            }
            int j = i+1;
            while(v[j]==1){
                v[j] = 0;
                j++;
            }
            if((j-i)>1){
                v[j] = 1;
                v[i] = -1;
            }
            i = j;
        }
        cout<<v.size()<<'\n';
        for(int x=0;x<v.size();x++){
            cout<<v[x]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}