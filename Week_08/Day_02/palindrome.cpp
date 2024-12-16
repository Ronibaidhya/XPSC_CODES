//https://codeforces.com/problemset/problem/805/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    string s;
    bool flag = true;
    for(int i=0;i<n;i+=2){
        if(flag){
            s.push_back('a');
            s.push_back('b');
            flag = false;
        }
        else{
            flag = true;
            s.push_back('b');
            s.push_back('a');
        }
    }
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
    return 0;
}