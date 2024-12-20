//https://codeforces.com/problemset/problem/1669/G
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<char>> v;
        for(int i=0;i<n;i++){
            vector<char> tmp;
            for(int i=0;i<m;i++){
                char x;
                cin>>x;
                tmp.push_back(x);
            }
            v.push_back(tmp);
        }

        for(int j=0;j<m;j++){
            int d = n-1;
            while(d>=0 && v[d][j]!='.'){
                if(v[d][j]=='o'){
                    d--;
                    break;
                }
                d--;
            }
            if(d<0){
                continue;
            }
            int i = d;
            while(i>=0){
                if(v[i][j]=='*'){
                    swap(v[d][j],v[i][j]);
                    d--;
                }
                else if(v[i][j]=='o'){
                    d = i-1;
                }
                i--;
            }
        }

        for(auto x:v){
            for(auto y:x){
                cout<<y;
            }
            cout<<'\n';
        }
        cout<<'\n';
    }
    return 0;
}