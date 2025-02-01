//https://codeforces.com/problemset/problem/1104/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string s;
    cin>>s;
    stack<char> st;
    // st.push(s[0]);
    int x = 0;
    for(int i=0;i<s.size();i++){
        if(!st.empty() && st.top()==s[i]){
            st.pop();
            x++;
        }
        else{
            st.push(s[i]);
        }
    }
    if(x%2!=0){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
    return 0;
}