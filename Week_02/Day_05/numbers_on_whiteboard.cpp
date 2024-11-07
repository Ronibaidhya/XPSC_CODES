//https://codeforces.com/problemset/problem/1430/C
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
        priority_queue<int> pq;
        for(int i=1;i<=n;i++){
            pq.push(i);
        }
        --n;
        vector<pair<int,int>> ans;
        while(n--){
            if(pq.size()>=2){
                int x = pq.top();
                pq.pop();
                int y = pq.top();
                pq.pop();
                ans.push_back({x,y});
                int sum = (x+y);
                pq.push(ceil(1.0*sum/2));
            }
        }
        cout<<pq.top()<<'\n';
        for(auto[x,y]:ans){
            cout<<x<<" "<<y<<'\n';
        }
    }
    return 0;
}