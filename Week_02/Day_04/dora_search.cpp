//https://codeforces.com/problemset/problem/1793/C
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
        int mn = 1;
        int mx = n;
        vector<int> v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        int l = 1;
        int r = n;
        bool flag = false;
        while(l<r){
            if(v[l]!=mn && v[l]!=mx && v[r]!=mn && v[r]!=mx ){
                flag = true;
                cout<<l<<" "<<r<<'\n';
                break;
            }
            if(v[l]==mn ){
                l++;
                mn++;
            }
            else if(v[l]==mx){
                l++;
                mx--;
            }
            else if(v[r]==mn){
                r--;
                mn++;
            }
            else if(v[r]==mx){
                r--;
                mx--;
            }
        }
        if(flag==false){
            cout<<-1<<'\n';
        }
    }
    return 0;
}