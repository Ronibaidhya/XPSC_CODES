//https://codeforces.com/problemset/problem/1703/C
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
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            string s;
            cin>>s;
            for(int j=0;j<x;j++){
                if(s[j]=='D'){
                    if(v[i]==9){
                        v[i] = 0;
                    }
                    else{
                        v[i] = v[i]+1;
                    }
                }
                else{
                    if(v[i]==0){
                        v[i] = 9;
                    }
                    else{
                        v[i] = v[i]-1;
                    }
                }
            }
        }
        for(int x:v){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
    return 0;
}