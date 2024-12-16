//https://codeforces.com/problemset/problem/1582/C
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
        map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int mn = INT_MAX;
        auto it = mp.begin();
        while(it!=mp.end()){
            char x = it->first;
            int i=0,j=n-1,temp = 0;
            while(i<=j){
                if(s[i]==s[j]){
                    i++,j--;
                }
                else if(s[i]==x){
                    temp++;
                    i++;
                }
                else if(s[j]==x){
                    temp++;
                    j--;
                }
                else{
                    temp = INT_MAX;
                    break;
                }
            }
            mn = min(mn,temp);
            it++;
        }
        if(mn==INT_MAX){
            cout<<"-1\n";
        }
        else{
            cout<<mn<<'\n';
        }
    }
    return 0;
}