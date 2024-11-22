//https://codeforces.com/problemset/problem/1791/G1
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        vector<int> v(n);
        priority_queue<ll,vector<ll>,greater<int>> pq;
        for(int i=0;i<n;i++){
            cin>>v[i];
            pq.push(v[i]+i+1);
        }
        int cnt = 0;
        while(!pq.empty()){
            if(c>=pq.top()){
                cnt++;
                c-=pq.top();
            }
            else{
                break;
            }
            pq.pop();
        }
        cout<<cnt<<'\n';
    }
    return 0;
}