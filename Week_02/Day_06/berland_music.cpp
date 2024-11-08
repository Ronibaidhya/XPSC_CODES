//https://codeforces.com/problemset/problem/1622/B
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
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        string s;
        cin>>s;
        set<int> s1,s2;
        map<int,int> mp;
        int cnt = 0;
        for(int i=0;i<n;i++){
            mp[v[i]] = s[i]-48;
            if(mp[v[i]]==1){
                cnt++;
            }
        }
        for(int i=n;i>=1;i--){
            if(cnt>0){
                s1.insert(i);
            }
            else{
                s2.insert(i);
            }
            cnt--;
        }

        vector<int> ans(n);
        for(int i=0;i<n;i++){
            if(mp[v[i]]==0){
                auto it = s2.lower_bound(v[i]);
                if(it==s2.end()){
                    ans[i] = *(--s2.end());
                    s2.erase(*(--s2.end()));
                    continue;
                }
                ans[i] = *it;
                s2.erase(*it);
            }
            else{
                auto it = s1.lower_bound(v[i]);
                ans[i] = *it;
                s1.erase(*it);
            }

        }
        for(int x:ans){
            cout<<x<<" ";
        }
        cout<<'\n';

    }
    return 0;
}