//https://codeforces.com/problemset/problem/1851/C
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
        if(mp.size()==1){
            cout<<"YES\n";
        }
        else{
            int cnt1=0,cnt2=0;
            int i = 0;
            for(i;i<n;i++){
                if(cnt1>=k){
                    break;
                }
                if(v[i]==v[0]){
                    cnt1++;
                }
            }
            if(cnt1<k){
                cout<<"NO\n";
            }
            else if(cnt1==k && v[0]==v[n-1]){
                cout<<"YES\n";
            }
            else{
                for(int j = n-1;j>=i;j--){
                    if(cnt2>=k){
                        break;
                    }
                    if(v[j]==v[n-1]){
                        cnt2++;
                    }
                }
                if(cnt2<k){
                    cout<<"NO\n";
                }
                else{
                    cout<<"YES\n";
                }
            }
        }
    }
    return 0;
}