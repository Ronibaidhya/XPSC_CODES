//https://www.codechef.com/problems/MOONSOON
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m,h;
        cin>>n>>m>>h;
        priority_queue<int> p;
        priority_queue<int> q;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            p.push(x);
        }
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            q.push(x);
        }
        ll ans = 0;
        while(!p.empty() && !q.empty()){
            ll x = q.top()*h;
            if(x>p.top()){
                ans+=p.top();
            }
            else{
                ans+=x;
            }
            p.pop();
            q.pop();
        }
        cout<<ans<<'\n';
    }
    return 0;
}