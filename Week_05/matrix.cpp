//https://codeforces.com/problemset/problem/1783/B
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
        set<int> s;
        int x = n*n;
        queue<int> q;
        int l=1,r=x;
        while(l<=r){
            q.push(r);
            q.push(l);
            l++,r--;
        }
        bool flag = false;
        vector<vector<int>> v;
        for(int i=0;i<n;i++){
            vector<int> temp;
            for(int j=0;j<n;j++){
                temp.push_back(q.front());
                q.pop();
            }
            if(flag){
                reverse(temp.begin(),temp.end());
                v.push_back(temp);
                flag = false;
            }
            else{
                flag = true;
                v.push_back(temp);
            }
        }
        for(auto i:v){
            for(auto j:i){
                cout<<j<<" ";
            }
            cout<<'\n';
        }
    }
    return 0;
}