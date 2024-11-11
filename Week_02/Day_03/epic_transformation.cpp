//https://codeforces.com/problemset/problem/1506/D

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
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        priority_queue<int> pq;
        for(auto[x,y]:mp){
            pq.push(y);
        }
        while(!pq.empty()){
            if(pq.size()<2){
                break;
            }
            int x,y;
            x = pq.top();
            pq.pop();
            y = pq.top();
            pq.pop();
            x--,y--;
            if(x>0){
                pq.push(x);
            }
            if(y>0){
                pq.push(y);
            }
        }
        int ans = 0;
        while(!pq.empty()){
            ans+= pq.top();
            pq.pop();
        }
        cout<<ans<<'\n';
    }
    return 0;
}