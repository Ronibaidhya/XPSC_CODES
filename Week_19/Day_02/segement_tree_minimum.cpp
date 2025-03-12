//https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int maxN = 1e5+9,inf = 1e9+9;
ll a[maxN], t[4*maxN];

void build(int n,int b,int e){
    if(b==e){
        t[n] = a[b];
        return;
    }
    int mid = (b+e)/2;
    int l = 2*n , r = (2*n)+1;
    build(l,b,mid);
    build(r,mid+1,e);
    t[n] = min(t[l],t[r]);
}

void update(int n,int b, int e, int i, int v){
    if(i<b || i>e){
        return;
    }
    if(b==e){
        t[n] = v;
        return;
    }
    int mid = (b+e)/2;
    int l = 2*n , r = (2*n)+1;
    update(l,b,mid,i,v);
    update(r,mid+1,e,i,v);
    t[n] = min(t[l],t[r]);
}

ll query(int n,int b, int e, int i, int j){
    if(e<i || j<b){
        return inf;
    }
    if(i<=b && e<=j){
        return t[n];
    }
    int mid = (b+e)/2;
    int l = 2*n , r = (2*n)+1;
    return min(query(l,b,mid,i,j),query(r,mid+1,e,i,j));
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    build(1,1,n);
    while(m--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==1){
            update(1,1,n,b+1,c);
        }
        else{
            cout<<query(1,1,n,b+1,c)<<"\n";
        }
    }
    return 0;
}