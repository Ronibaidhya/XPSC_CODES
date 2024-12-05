//https://codeforces.com/problemset/problem/1676/F
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        vector<int> ans;
        for(auto[x,y]:mp){
            if(y>=k){
                ans.push_back(x);
            }
        }
        if(ans.size()==0){
            cout<<-1<<'\n';
            continue;
        }
        int left = ans[0],right = ans[0];
        int l = ans[0];
        int r=1;
        int mx = INT_MIN;
        while(r<ans.size()){
            int dif = ans[r]-ans[r-1];
            if(dif==1){
                if((ans[r]-l)>mx){
                    mx = ans[r]-l;
                    left = l;
                    right = ans[r];
                }
            }
            else{
                l = ans[r];
            }
            r++;
        }
        cout<<left<<" "<<right<<'\n';
    }
    return 0;
}