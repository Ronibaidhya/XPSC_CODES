//https://codeforces.com/problemset/problem/1729/B
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
        string v;
        cin>>v;
        string ans;
        int r = (n-1);
        while(r>=0){
            if(v[r]=='0'){
                int y = v[r-2]-'0';
                int z = v[r-1]-'0';
                int x = (y*10)+z;
                ans.push_back(char(97+x-1));
                r-=3;
            }
            else{
                int x = v[r]-'0';
                ans.push_back(char(97+x-1));
                r--;
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<'\n';
    }

    return 0;
}