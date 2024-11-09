//https://codeforces.com/problemset/problem/1790/D
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
/*
1
6
2 3 2 4 2 4
*/
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        vector<int> v;
        int st = mp.begin()->second;
        for(auto[x,y]:mp){
            v.push_back(x);
        }

        for(int i=1;i<v.size();i++){
            int dif = v[i]-v[i-1];
            if(dif>1){
                st+=mp[v[i]];
            }
            else if(dif==1){
                // int d = mp[v[i-1]] - mp[v[i]];
                // if(d>0){
                //     st = st+d;
                // }
                if(mp[v[i]]>mp[v[i-1]]){
                    st = st+(mp[v[i]]-mp[v[i-1]]);
                }
            }
        }
        cout<<st<<'\n';

    }
    return 0;
}
