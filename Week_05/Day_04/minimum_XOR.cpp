//https://www.codechef.com/problems/MINMXOR
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
        int XOR = 0;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            XOR^=v[i];
        }
        int ans = XOR;
        for(int i=0;i<n;i++){
            int temp = (XOR^v[i]);
            ans = min(ans,temp);
        }
        cout<<ans<<'\n';
    }
    return 0;
}