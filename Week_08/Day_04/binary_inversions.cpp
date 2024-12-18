//https://codeforces.com/problemset/problem/1760/E
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll inversion(vector<int> v){
    int cnt = 0;
    ll ans = 0;
    for(auto val:v){
        if(val==1){
            cnt++;
        }
        else{
            ans+=cnt;
        }
    }
    return ans;
}

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
        vector<int> temp1(v);
        vector<int> temp2(v);
        for(int i=0;i<n;i++){
            if(temp1[i]==0){
                temp1[i] = 1;
                break;
            }
        }
        for(int i=(n-1);i>=0;i--){
            if(temp2[i]==1){
                temp2[i] = 0;
                break;
            }
        }
        ll x = inversion(v);
        ll y = max(x,inversion(temp1));
        ll z = max(y,inversion(temp2));
        cout<<z<<'\n';
    }
    return 0;
}