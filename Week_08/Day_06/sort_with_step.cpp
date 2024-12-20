//https://codeforces.com/problemset/problem/1823/B
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
        vector<int> v(n+1);
        vector<int> temp;
        for(int i=1;i<=n;i++){
            cin>>v[i];
            temp.push_back(abs(v[i]-i));
        }
        int x=0,y=0;
        for(int i=0;i<temp.size();i++){
            if(temp[i]%k==0){
                x++;
            }
            else{
                y++;
            }
        }
        if(x==n){
            cout<<"0\n";
        }
        else if(y==2){
            cout<<"1\n";
        }
        else{
            cout<<"-1\n";
        }
    }
    return 0;
}