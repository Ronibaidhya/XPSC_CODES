//https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    while(k--){
        int x;
        cin>>x;
        int l=0,r=n-1,ans=n+1;
        while(l<=r){
            int mid = (l+r)/2;
            if(v[mid]>=x){
                ans = min(ans,mid+1);
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}