//https://codeforces.com/problemset/problem/621/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    ll sum = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());

    if(sum%2==0){
        cout<<sum;
    }
    else{
        for(int i=0;i<n;i++){
            if(v[i]%2!=0){
                sum-=v[i];
                break;
            }
        }
        cout<<sum;
    }
    return 0;
}