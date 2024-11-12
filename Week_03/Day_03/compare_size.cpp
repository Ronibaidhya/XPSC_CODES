//https://codeforces.com/problemset/problem/1741/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        if(a==b){
            cout<<"="<<'\n';
        }
        else if(a.back()==b.back()){
            if(a.back()=='S'){
                if(a.size()>b.size()){
                    cout<<"<"<<'\n';
                }
                else{
                    cout<<">"<<'\n';
                }
            }
            else if(a.back()=='L'){
                if(a.size()>b.size()){
                    cout<<">"<<'\n';
                }
                else{
                    cout<<"<"<<'\n';
                }
            }
        }
        else{
            if(a.back()=='S'){
                cout<<"<"<<'\n';
            }
            else if(b.back()=='S'){
                cout<<">"<<'\n';
            }
            else if(a.back()=='M' && b.back()=='L'){
                cout<<"<"<<'\n';
            }
            else if(a.back()=='L' && b.back()=='M'){
                cout<<">"<<'\n';
            }
        }
    }
    return 0;
}