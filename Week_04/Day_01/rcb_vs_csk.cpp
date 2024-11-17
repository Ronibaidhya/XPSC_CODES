//https://www.codechef.com/problems/RCBCSK
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int x,y;
    cin>>x>>y;
    if(x<y){
        cout<<"CSK";
    }
    else{
        int dif = x-y;
        if(dif>=18){
            cout<<"RCB";
        }
        else{
            cout<<"CSK";
        }
    }
    return 0;
}