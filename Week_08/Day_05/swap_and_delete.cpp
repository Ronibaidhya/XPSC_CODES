//https://codeforces.com/problemset/problem/1913/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()==1){
            cout<<1<<'\n';
            continue;
        }
        map<char,int> mp;
        for(auto val:s){
            mp[val]++;
        }
        string t;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0' && mp['1']>0){
                t.push_back('1');
                mp['1']--;
            }
            else if(s[i]=='1' && mp['0']>0){
                t.push_back('0');
                mp['0']--;
            }
            else{
                break;
            }
        }
        if(s.size()==1){
            cout<<"1\n";
        }
        else{
            cout<<s.size()-t.size()<<'\n';
        }
    }
    return 0;
}