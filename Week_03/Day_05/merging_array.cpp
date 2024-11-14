//https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    vector<int> ans;
    int l=0,r=0;
    while(l<n && r<m){
        if(a[l]<=b[r]){
            ans.push_back(a[l]);
            l++;
        }
        else if(a[l]>b[r]){
            ans.push_back(b[r]);
            r++;
        }
    }
    if(l<n){
        for(int i=l;i<n;i++){
            ans.push_back(a[i]);
        }
    }
    else if(r<m){
        for(int i=r;i<m;i++){
            ans.push_back(b[i]);
        }
    }
    for(auto x:ans){
        cout<<x<<" ";
    }
    return 0;
}