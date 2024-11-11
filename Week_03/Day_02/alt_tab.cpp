//https://www.codechef.com/problems/ALTTAB
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    set<string> st;
    string ans;
    vector<string> v;
    while(t--){
        string s;
        cin>>s;
        v.push_back(s);
    }
    reverse(v.begin(),v.end());
    for(string x:v){
        auto it = st.find(x);
        if(it==st.end()){
            st.insert(x);
            ans.push_back(x[x.size()-2]);
            ans.push_back(x[x.size()-1]);
        }
    }
    cout<<ans<<'\n';
    return 0;
}