//https://codeforces.com/problemset/problem/1165/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    multiset<int> ml;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ml.insert(x);
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        auto it = ml.lower_bound(i+1);
        if(it!=ml.end()){
            ans++;
            ml.erase(it);
        }
        else{
            break;
        }
    }
    cout<<ans;
    return 0;
}