//https://codeforces.com/problemset/problem/1933/D
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
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(v[0]!=v[1]){
            cout<<"YES\n";
        }
        else{
            bool flag = false;
            for(int i=1;i<n;i++){
                if(v[i]%v[0]!=0){
                    flag = true;
                }
            }
            if(flag){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}