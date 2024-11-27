//https://www.codechef.com/problems/DUPLET
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
        // if(n==1){
        //     cout<<1<<" "<<0<<'\n';
        //     continue;
        // }
        // int x,y;
        // for(int i=2;i<=n;i++){
        //     if(n%i==0){
        //         x = n/i;
        //         y = i;
        //         break;
        //     }
        // }
        // if(x==y){
        //     cout<<(x-1)<<" "<<1<<'\n';
        // }
        // else{
        //     int a = x^y;
        //     cout<<max(x,y)<<" "<<a<<'\n';
        // }
        cout<<n<<" "<<n-1<<'\n';
    }
    return 0;
}