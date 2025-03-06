//https://codeforces.com/problemset/problem/1920/A
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
        vector<int> v;
        int mx = INT_MIN, mn = INT_MAX;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            if(x==1){
                mx = max(mx,y);
            }
            else if(x==2){
                mn = min(mn,y);
            }
            else{
                v.push_back(y);
            }
        }
        int cnt = 0;
        for(auto val:v){
            if(val>=mx && val<=mn){
                cnt++;
            }
        }
        int ans = mn-mx+1;
        ans-=cnt;
        if(ans<=0){
            cout<<"0\n";
        }
        else{
            cout<<ans<<"\n";
        }
        // cout<<mx<<" "<<mn<<"\n";
    }
    return 0;
}