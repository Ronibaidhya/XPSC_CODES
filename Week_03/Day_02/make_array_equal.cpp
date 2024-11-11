//https://www.codechef.com/problems/MEBA
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
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        if(mp.size()==1){
            cout<<"YES\n";
        }
        else if(mp.size()==2){
            auto it = mp.find(0);
            if(it==mp.end()){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }
        else cout<<"NO\n";
    }
    return 0;
}