//https://codeforces.com/problemset/problem/1821/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans = INT_MAX;
        for(char i='a';i<='z';i++){
            int p = 0;
            int x = 0;
            for(int j=0;j<s.size();j++){
                if(s[j]==i){
                    x=0;
                }
                else{
                    x++;
                }
                p = max(p,x);
            }
            int cnt = 0;
            while(p>0){
                cnt++;
                p/=2;
            }
            ans = min(ans,cnt);
        }
        cout<<ans<<'\n';
    }
    return 0;
}