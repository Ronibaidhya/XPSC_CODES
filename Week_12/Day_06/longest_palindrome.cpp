#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<string> v(n);
    set<string> s;
    for(int i=0;i<n;i++){
        cin>>v[i];
        s.insert(v[i]);
    }
    string a,b,c;
    bool flag = true;
    for(int i=0;i<n;i++){
        string x = v[i];
        reverse(x.begin(),x.end());
        if(v[i]==x){
            if(flag){
                flag = false;
                c = x;
            }
        }
        else{
            auto it = s.find(x);
            if(it!=s.end()){
                // cout<<v[i]<<" "<<x<<'\n';
                s.erase(v[i]);
                a+=v[i];
            }
        }
    }
    string ans;
    b = a;
    ans+=a;
    ans+=c;
    reverse(b.begin(),b.end());
    ans+=b;
    cout<<ans.size()<<"\n";
    cout<<ans<<'\n';
    // cout<<a<<" "<<b<<" "<<c;
    return 0;
}