//https://codeforces.com/problemset/problem/1921/B
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
        string a,b;
        cin>>a>>b;
        int c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                if(a[i]=='1' && b[i]=='0'){
                    c1++;
                }
                else{
                    c2++;
                }
            }
        }
        int ans;
        if(c1>c2 || c2>c1){
            ans = abs(c1-c2)+min(c1,c2);
        }
        else{
            ans = c1;
        }
        cout<<ans<<'\n';
    }
    return 0;
}