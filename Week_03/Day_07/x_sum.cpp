//https://codeforces.com/problemset/problem/1676/D
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int n,m;
vector<vector<int>> v;
ll s(int i,int j,int x,int y){
    ll ans = 0;
    i+=x;
    j+=y;
    while(i>=0 && j>=0 && i<n && j<m){
        ans+=v[i][j];
        i+=x;
        j+=y;
    }
    return ans;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        v.clear();
        cin>>n>>m;
        for(int i=0;i<n;i++){
            vector<int> temp;
            for(int j=0;j<m;j++){
                int x;
                cin>>x;
                temp.push_back(x);
            }
            v.push_back(temp);
        }
        
        vector<pair<int,int>> w = {{-1,-1},{-1,1},{1,-1},{1,1}};
        ll mx = INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ll sum = v[i][j];
                for(auto [x,y]:w){
                    sum+= s(i,j,x,y);
                }
                mx = max(mx,sum);
            }
        }
        cout<<mx<<'\n';
    }
    return 0;
}