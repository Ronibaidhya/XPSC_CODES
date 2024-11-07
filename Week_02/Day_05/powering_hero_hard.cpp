//https://codeforces.com/problemset/problem/1800/C1
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        priority_queue<int> pq;
        int n;
        cin>>n;
        ll ans = 0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x>0){
                pq.push(x);
            }
            else if(x==0){
                if(!pq.empty()){
                    ans+=pq.top();
                    pq.pop();
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}