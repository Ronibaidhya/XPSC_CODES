//https://codeforces.com/problemset/problem/1714/B
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
        set<int> s;
        for(int i=(n-1);i>=0;i--){
            auto it = s.find(v[i]);
            if(it==s.end()){
                s.insert(v[i]);
            }
            else{
                break;
            }
        }
        cout<<n-s.size()<<'\n';
    }
    return 0;
}