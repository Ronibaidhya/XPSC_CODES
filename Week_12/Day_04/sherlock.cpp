//https://codeforces.com/problemset/problem/776/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    n++;
    vector<bool> prime(n+1,true);
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int j=2;j*i<=n;j++){
                prime[j*i] = false;
            }
        }
    }
    if(n<=3){
        cout<<1<<"\n";
    }
    else{
        cout<<2<<"\n";
    }
    for(int i=2;i<=n;i++){
        if(prime[i]){
            cout<<1<<" ";
        }
        else{
            cout<<2<<" ";
        }
    }
    return 0;
}