//https://codeforces.com/problemset/problem/1690/B
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
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        bool flag = true;
        vector<int> dif;
        int mx = INT_MIN;
        for(int i=0;i<n;i++){
            if(b[i]>a[i]){
                flag = false;
                break;
            }
            else if(b[i]==0){
                mx = max(mx,a[i]-b[i]);
                continue;
            }
            else{
                dif.push_back(a[i]-b[i]);
            }
        }
        if(flag==false){
            cout<<"NO\n";
        }
        else if(flag && dif.size()==0){
            cout<<"YES\n";
        }
        else{
            int x = dif[0];
            int mx1 = dif[0];
            for(int i=1;i<dif.size();i++){
                mx1 = max(mx1,dif[i]);
                if(x!=dif[i]){
                    flag = false;
                    break;
                }
            }
            if(mx1<mx){
                flag = false;
            }
            if(flag) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}