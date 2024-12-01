//https://codeforces.com/problemset/problem/1726/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n>m){
            cout<<"NO";
        }
        else if(n%2==0 && m%2!=0){
            cout<<"NO";
        }
        else{
            cout<<"YES\n";
            if(m%n==0){
                int x = m/n;
                for(int i=0;i<n;i++){
                    cout<<x<<" ";
                }
            }
            else if(n%2!=0){
                for(int i=0;i<(n-1);i++){
                    cout<<1<<" ";
                }
                cout<<(m-n+1);
            }
            else{
                for(int i=0;i<(n-2);i++){
                    cout<<1<<" ";
                }
                int x = (m-n+2)/2;
                cout<<x<<" "<<x;
            }
        }
        cout<<'\n';
    }
    return 0;
}