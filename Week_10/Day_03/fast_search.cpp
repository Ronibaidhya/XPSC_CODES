//https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int closest_to_left(vector<int> &v,int x){
    int l=0,r=v.size()-1,ans = -1;
    while(l<=r){
        int mid = (l+r)/2;
        if(v[mid]<=x){
            ans = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    return ans;
}
int closest_to_right(vector<int> &v,int x){
    int l=0,r=v.size()-1,ans = v.size();
    while(l<=r){
        int mid = (l+r)/2;
        if(v[mid]>=x){
            ans = min(ans,mid);
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return ans;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int k;
    cin>>k;
    while(k--){
        int x,y;
        cin>>x>>y;
        int l = closest_to_right(v,x);
        int r = closest_to_left(v,y);
        if(v[l]>=x && v[r]<=y){
            cout<<r-l+1<<" ";
        }
        else{
            cout<<0<<" ";
        }
        // cout<<upper_bound(v.begin(),v.end(),y)-lower_bound(v.begin(),v.end(),x)<<" ";
    }
    return 0;
}