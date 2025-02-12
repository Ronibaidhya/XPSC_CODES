//https://codeforces.com/problemset/problem/1111/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string s,t;
    cin>>s>>t;
    int vs,vt,cs,ct;
    vs=0,vt=0,cs=0,ct=0;
    if(s.size()!=t.size()){
        cout<<"NO\n";
        return 0;
    }
    bool flag = true;
    for(int i=0;i<s.size();i++){
        vs=-1,vt=-1,cs=-1,ct=-1;
        if(s[i]=='a'|| s[i]=='e' || s[i]=='i'||s[i]=='o'||s[i]=='u'){
            vs = i;
        }
        else{
            cs = i;
        }
        if(t[i]=='a'|| t[i]=='e' || t[i]=='i'||t[i]=='o'||t[i]=='u'){
            vt = i;
        }
        else{
            ct = i;
        }
        if(vs==vt && cs==ct){
            flag = true;
        }
        else{
            flag = false;
            break;
        }
    }
    if(flag) cout<<"YES\n";
    else{
        cout<<"NO\n";
    }
    return 0;
}