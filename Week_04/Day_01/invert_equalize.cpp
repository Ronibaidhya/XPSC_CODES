//https://www.codechef.com/problems/INVEQ
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
        char f = s[0];
        int l = 1;
        int cnt = 0;
        bool flag = true;
        while(l<s.size()){
            if(flag && s[l]!=f){
                cnt++;
                flag = false;
            }
            else if(s[l]==f){
                flag = true;
            }
            l++;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}