//https://codeforces.com/problemset/problem/1399/C
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
        sort(v.begin(),v.end());
        int ans = 0;
        for(int i=2;i<=2*n;i++){
            int cnt = 0;
            int l=0,r=n-1;
            while(l<r){
                int x = v[l]+v[r];
                if(x==i){
                    cnt++;
                    l++;
                    r--;
                }
                else if(x>i){
                    r--;
                }
                else{
                    l++;
                }
            }
            ans = max(ans,cnt);
        }
        cout<<ans<<'\n';
    }
    return 0;
}