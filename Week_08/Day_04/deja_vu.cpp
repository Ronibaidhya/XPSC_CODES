//https://codeforces.com/problemset/problem/1891/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> v(n);
        vector<int> a(q);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<q;i++){
            cin>>a[i];
        }
        set<int> s;
        for(int i=0;i<q;i++){
            auto it = s.find(a[i]);
            if(it!=s.end()){
                continue;
            }
            s.insert(a[i]);
            for(int j=0;j<n;j++){
                if(v[j]%(1<<a[i])==0){
                    v[j]+= (1<<(a[i]-1));
                }
            }
        }
        for(auto val:v){
            cout<<val<<" ";
        }
        cout<<'\n';
    }
    return 0;
}