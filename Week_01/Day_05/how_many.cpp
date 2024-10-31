//https://atcoder.jp/contests/abc214/tasks/abc214_b?lang=en
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int s,t;
    cin>>s>>t;
    int cnt =0;
    for(int a=0;a<=s;a++){
        for(int b=0;a+b<=s;b++){
            for(int c=0;a+b+c<=s;c++){
                if(a*b*c<=t){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}