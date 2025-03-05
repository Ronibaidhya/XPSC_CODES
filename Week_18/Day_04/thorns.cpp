//https://codeforces.com/problemset/problem/1932/A
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
        string s;
        cin>>s;
        int ans = 0;
        for(int i=1;i<n;i++){
            if(s[i]=='*' && s[i]==s[i-1]){
                break;
            }
            else if(s[i]=='@'){
                ans++;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}