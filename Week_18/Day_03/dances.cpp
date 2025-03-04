//https://codeforces.com/problemset/problem/1883/G1
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> v(n);
        multiset<int> ml;
        v[0] = 1;
        for(int i=1;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            ml.insert(x);
        }
        for(int i=0;i<n;i++){
            auto it = ml.upper_bound(v[i]);
            if(it!=ml.end()){
                ml.erase(it);
            }
        }
        cout<<ml.size()<<'\n';
    }
    return 0;
}