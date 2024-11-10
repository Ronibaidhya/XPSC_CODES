//https://codeforces.com/problemset/problem/1791/C
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
        int x = 0;
        for(int i=0;i<(n/2);i++){
            if(s[i]=='0' && s[n-i-1]=='1'){
                x+=2;
            }
            else if(s[i]=='1' && s[n-i-1]=='0'){
                x+=2;
            }
            else break;
        }
        cout<<n-x<<'\n';

    }
    return 0;
}