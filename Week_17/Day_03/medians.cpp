//https://codeforces.com/problemset/problem/2032/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n==1){
            cout<<1<<'\n'<<1<<'\n';
        }
        else if(k==1 || n==k){
            cout<<"-1\n";
        }
        else{
            if(k%2==0){
                cout<<3<<'\n';
                cout<<1<<" "<<k<<" "<<k+1<<'\n';
            }
            else{
                cout<<5<<"\n";
                cout<<1<<" "<<k-1<<" "<<k<<" "<<k+1<<" "<<n<<'\n';
            }
        }
    }
    return 0;
}