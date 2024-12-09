//https://codeforces.com/problemset/problem/467/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll check_kth_bit_on_or_off(ll n,ll k){
    return (n>>k)&1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v(m+1);
    int maxBit = 0;
    for(int i=0;i<m+1;i++){
        cin>>v[i];
        maxBit = max(maxBit,__lg(v[i]));
    }
    vector<vector<int>> bit;
    for(int i=0;i<m+1;i++){
        vector<int> tmp;
        for(int j=maxBit;j>=0;j--){
            // cout<<((v[i]>>j)&1)<<" ";
            tmp.push_back(((v[i]>>j)&1));
        }
        // cout<<"\n";
        bit.push_back(tmp);
    }
    vector<int> cmp(bit[m]);
    vector<int> dif(m);
    for(int i=0;i<m;i++){
        int cnt = 0;
        for(int j=0;j<=maxBit;j++){
            if(bit[i][j]!=cmp[j]){
                cnt++;
            }
        }
        dif[i] = cnt;
    }
    int ans = 0;
    for(auto x:dif){
        if(x<=k){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}