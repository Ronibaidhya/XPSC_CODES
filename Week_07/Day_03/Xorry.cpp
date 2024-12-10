//https://www.codechef.com/problems/XORRY1
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int maxBit = __lg(x);
        int a = (1<<maxBit);
        cout<<x-a<<" "<<a<<'\n';
    }
    return 0;
}