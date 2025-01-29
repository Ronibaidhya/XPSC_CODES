//https://codeforces.com/problemset/problem/1915/D
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
        string ans;
        int idx = n-1;
        // for(int i=n-1;i>=1;i--){
        while(idx>=0){
            if(s[idx]=='a' || s[idx]=='e'){
                if(s[idx-1]=='b' || s[idx-1]=='c' || s[idx-1]=='d'){
                    ans.push_back(s[idx]);
                    ans.push_back(s[idx-1]);
                    ans.push_back('.');
                    idx-=2;
                }
            }
            else if(s[idx]=='b'||s[idx]=='c'||s[idx]=='d'){
                if(s[idx-1]=='a' || s[idx-1]=='e'){
                    ans.push_back(s[idx]);
                    ans.push_back(s[idx-1]);
                    ans.push_back(s[idx-2]);
                    ans.push_back('.');
                    idx-=3;
                }
            }
        }
        reverse(ans.begin(),ans.end());
        for(int i=1;i<ans.size();i++){
            cout<<ans[i];
        }
        cout<<'\n';
    }
    return 0;
}