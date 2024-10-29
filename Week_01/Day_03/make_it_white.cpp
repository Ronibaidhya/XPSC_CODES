//https://codeforces.com/problemset/problem/1927/A
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
        int x,y;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                x = i;
                break;
            }
        }
        for(int i=(n-1);i>=0;i--){
            if(s[i]=='B'){
                y = i;
                break;
            }
        }
        cout<<(y-x)+1<<"\n";
    }
    return 0;
}
