//https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string s;
    cin>>s;
    bool fq[26] = {false};
    for(char x : s){
        fq[x-97] = true;
    }
    for(int i=0;i<26;i++){
        if(!fq[i]){
            cout<< char(i+97);
            return 0 ;
        }
    }
    cout<<"None";
    return 0;
}