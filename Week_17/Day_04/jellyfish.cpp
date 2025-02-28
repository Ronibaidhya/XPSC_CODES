//https://codeforces.com/contest/1875/problem/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> a(n);
        vector<int> b(m);
        int x=0,y=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<a[x]){
                x=i;
            }
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            if(b[i]>b[y]){
                y = i;
            }
        }
        if(a[x]<b[y]){
            swap(a[x],b[y]);
        }
        if(k%2==0){
            x=0,y=0;
            for(int i=1;i<n;i++){
                if(a[i]>a[x]){
                    x=i;
                }
            }
            for(int i=1;i<m;i++){
                if(b[i]<b[y]){
                    y=i;
                }
            }
            if(a[x]>b[y]){
                swap(a[x],b[y]);
            }
        }
        ll ans = 0;
        for(int i=0;i<n;i++){
            ans+=a[i];
        }
        cout<<ans<<'\n';
    }
    return 0;
}