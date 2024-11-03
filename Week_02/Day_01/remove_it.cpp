//https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,x;
    cin>>n>>x;
    vector<int> v;
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        if(y!=x){
            v.push_back(y);
        }
    }
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}