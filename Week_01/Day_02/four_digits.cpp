//https://atcoder.jp/contests/abc222/tasks/abc222_a?lang=en
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string s;
    cin>>s;
    if(s.size()<4){
        int x = 4-s.size();
        while(x--){
            cout<<0;
        }
        cout<<s<<'\n';
    }
    else{
        cout<<s<<'\n';
    }
    return 0;
}
