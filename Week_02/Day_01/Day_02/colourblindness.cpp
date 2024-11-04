//https://codeforces.com/problemset/problem/1722/B
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
        bool flag = true;
        for(int i=0;i<n;i++){
            if(a[i]=='G' && b[i]=='G'){
                a[i] = 'B';
                b[i] = 'B';
            }
            else if(a[i]=='G'){
                a[i] = 'B';
            }
            else if(b[i]=='G'){
                b[i] ='B';
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                flag = false;
            }
        }
        if(flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}