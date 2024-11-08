//https://codeforces.com/problemset/problem/1986/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<int> v(m);
        set<int> st;
        for(int i=0;i<m;i++){
            cin>>v[i];
            st.insert(v[i]);
        }
        string c;
        cin>>c;
        sort(c.begin(),c.end());
        map<int,char> mp;
        auto j = st.begin();
        for(int i=0;i<st.size();i++){
            mp[*j] = c[i];
            ++j;
        }
        for(auto[x,y]:mp){
            // cout<<x<<" "<<y<<endl;
            s[x-1] = y;
        }
        cout<<s<<"\n";
    }
    return 0;
}