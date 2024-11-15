//https://codeforces.com/problemset/problem/1843/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        ll sum = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=abs(v[i]);
        }
        int l=0;
        ll cnt=0;
        bool flag = true;
        while(l<n){
            if(v[l]<0){
                if(flag){
                    cnt++;
                }
                flag = false;
            }
            else if(v[l]>0){
                flag = true;
            }
            l++;
        }
        cout<<sum<<" "<<cnt<<'\n';
    }
    return 0;
}