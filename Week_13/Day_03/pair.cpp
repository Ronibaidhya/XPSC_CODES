//https://codeforces.com/problemset/problem/1547/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int k,n,m;
        cin>>k>>n>>m;
        vector<int> a(n);
        vector<int> b(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        vector<int> ans;
        bool flag = true;
        int l=0,r=0;
        while(l<n && r<m){
            if(a[l]>k){
                if(b[r]==0){
                    ans.push_back(b[r]);
                    k++;
                    r++;

                }
                else if(b[r]>k){
                    // flag = false;
                    break;
                }
                else{
                    ans.push_back(b[r]);
                    r++;
                }
            }
            else if(b[r]>k){
                if(a[l]==0){
                    ans.push_back(a[l]);
                    k++;
                    l++;
                }
                else if(a[l]>k){
                    // flag = false;
                    break;
                }
                else{
                    ans.push_back(a[l]);
                    l++;
                }
            }
            else{
                if(a[l]==0) k++;
                if(b[r]==0) k++;
                ans.push_back(a[l]);
                ans.push_back(b[r]);
                l++;
                r++;
            }
        }
        for(int i=l;i<n;i++){
            if(a[i]==0){
                k++;
            }
            if(a[i]<=k ){
                ans.push_back(a[i]);
            }
        }
        for(int i=r;i<m;i++){
            if(b[i]==0){
                k++;
            }
            if(b[i]<=k){
                ans.push_back(b[i]);
            }
        }
        if(ans.size()!= (n+m)){
            cout<<-1<<'\n';
            continue;
        }
        for(auto x:ans){
            cout<<x<<" ";
        }
        // cout<<k;
        cout<<'\n';
    }
    return 0;
}