//https://codeforces.com/problemset/problem/1884/B
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
        string s;
        cin>>s;
        vector<int> p;
        vector<int> pref(n);
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                p.push_back(i);
            }
        }
        if(s[n-1]=='0'){
            pref[n-1] = 0;
        }
        else{
            pref[n-1] = 1;
        }
        for(int i=n-2;i>=0;i--){
            if(s[i]=='0'){
                pref[i] = pref[i+1];
            }
            else{
                pref[i] = pref[i+1]+1;
            }
        }
        ll j = 0;
        for(int i=n-1;i>=0;i--){
            if(p.empty()){
                cout<<-1<<" ";
            }
            else{
                ll x = pref[p.back()];
                cout<<j+x<<" ";
                j+=x;
                p.pop_back();
            }
        }
        cout<<"\n";
    }
    return 0;
}