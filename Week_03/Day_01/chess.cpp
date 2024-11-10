//https://www.codechef.com/problems/CHOLY
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int x,y,z;
    cin>>x>>y>>z;
    double a = x + (y*0.5);
    double b = y*0.5 + z;
    // cout<<a<<" "<<b;

    double r = 4-(x+y+z);
    if((r+a)>b){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}