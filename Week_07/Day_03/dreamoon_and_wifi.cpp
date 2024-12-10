//https://codeforces.com/problemset/problem/476/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int check_kth_bit_on_or_off(int n,int k){
    return (n>>k)&1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string s,t;
    cin>>s>>t;
    int n = s.size();
    int sum1 = 0,sum2 = 0,cnt = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='+'){
            sum1++;
        }
        if(s[i]=='-'){
            sum1--;
        }
        if(t[i]=='+'){
            sum2++;
        }
        if(t[i]=='-'){
            sum2--;
        }
        if(t[i]=='?'){
            cnt++;
        }
    }
    if(sum1==sum2 && cnt==0){
        double a = 1.0;
        cout<<fixed<<setprecision(12)<<a<<'\n';
    }
    // else if(cnt==0){
    //     double a = 0.0;
    //     cout<<fixed<<setprecision(12)<<a<<'\n';
    // }
    else{
        
        // int temp = sum2;
        int ans = 0;
        for(int i=0;i<(1<<cnt);i++){
            int temp = sum2;
            for(int j=0;j<cnt;j++){
                int x = check_kth_bit_on_or_off(i,j);
                if(x){
                    temp++;
                }
                else{
                    temp--;
                }
            }
            if(sum1==temp){
                ans++;
            }
        }
        double a = (ans*1.0)/(1<<cnt);
        cout<<fixed<<setprecision(12)<<a<<'\n';
    }
    return 0;
}