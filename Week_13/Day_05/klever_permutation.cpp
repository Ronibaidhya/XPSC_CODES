//https://codeforces.com/problemset/problem/1927/E
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
        vector<int> v(n+1,0);
        int x = 1,y=n;
        for(int i=1;i<=k;i++){
            for(int j=i;j<=n;j+=k){
                if(i%2==0){
                    v[j] = y;
                    y--;
                }
                else{
                    v[j] = x;
                    x++;
                }
            }
        }
        for(int i=1;i<=n;i++){
            cout<<v[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}