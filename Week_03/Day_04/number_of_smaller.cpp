//https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B
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
    int cnt = 0;
    int l=0,r=0;
    while(r<m){
        if(l<n && a[l]<b[r]){
            cnt++;
            l++;
        }
        else{
            cout<<cnt<<" ";
            r++;
        }
    }
    return 0;
}