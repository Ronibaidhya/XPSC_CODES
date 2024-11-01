//https://codeforces.com/problemset/problem/1907/B
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
        reverse(s.begin(),s.end());
        string ans;
        int l = 0;
        int u = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='b'){
                l++;
            }
            else if(s[i]=='B'){
                u++;
            }
            else if(s[i]>='a' && s[i]<='z' && s[i]!='b'){
                if(l>0){
                    --l;
                }
                else{
                    ans.push_back(s[i]);
                    // cout<<s[i];
                }
            }
            else if(s[i]>='A' && s[i]<='Z' && s[i]!='B'){
                if(u>0){
                    --u;
                }
                else if(u==0){
                    ans.push_back(s[i]);
                    // cout<<s[i];
                }
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<'\n';
    }
    return 0;
}