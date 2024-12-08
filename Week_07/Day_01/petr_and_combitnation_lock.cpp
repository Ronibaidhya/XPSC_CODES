//https://codeforces.com/problemset/problem/1097/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int check_kth_bit_on_or_off(int n,int k){
    return (n>>k)&1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bool flag = false;
    for(int i=0;i<(1<<n);i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            int x = check_kth_bit_on_or_off(i,j);
            if(x){
                sum+=v[j];
            }
            else{
                sum-=v[j];
            }
        }
        if(sum%360==0){
            flag = true;
            break;
        }
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}