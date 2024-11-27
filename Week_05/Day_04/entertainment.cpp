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
        int l=0,r=s.size()-1;
        bool flag = false;
        while(l<r){
            if(s[l]==s[r]){
                l++;r--;
            }
            else if(s[l]>s[r]){
                flag = true;
                break;
            }
            else{
                break;
            }
        }
        if(flag){
            string x = s;
            reverse(x.begin(),x.end());
            x+=s;
            cout<<x<<'\n';
        }
        else{
            cout<<s<<'\n';
        }
    }
    return 0;
}