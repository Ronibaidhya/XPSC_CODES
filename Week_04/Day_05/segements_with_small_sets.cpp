//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/E
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    set<int> s;
    multiset<int> ml;
    int l=0,r=0;
    ll ans = 0;
    while(r<n){
        s.insert(a[r]);
        ml.insert(a[r]);
        if(s.size()<=k){
            ans+= (r-l+1);
        }
        else{
            while(l<=r && s.size()>k){
                if(ml.count(a[l])>1){
                    ml.erase(ml.find(a[l]));
                }
                else{
                    ml.erase(a[l]);
                    s.erase(a[l]);
                }
                
                l++;
            }
            if(s.size()<=k){
                ans+=(r-l+1);
            }
        }
        r++;
    }
    cout<<ans;
    return 0;
}