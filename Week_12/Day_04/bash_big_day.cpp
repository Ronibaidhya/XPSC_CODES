//https://codeforces.com/problemset/problem/757/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> ans(1e5+2,0);
    for(int i=0;i<n;i++){
        int tmp = v[i];
        set<int> s;
        for(int j=2;j*j<=tmp;j++){
            while(tmp%j==0){
                s.insert(j);
                tmp/=j;
            }
        }
        if(tmp>1){
            s.insert(tmp);
        }
        for(auto val:s){
            ans[val]++;
        }
    }
    int mx = 1;
    for(int i=1;i<=1e5;i++){
        mx = max(mx,ans[i]);
    }
    cout<<mx<<'\n';
    return 0;
}