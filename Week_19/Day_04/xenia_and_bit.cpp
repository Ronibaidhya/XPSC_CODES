//https://codeforces.com/contest/339/problem/D
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int maxN = (1<<17)+9,inf = 1e9+9;
ll a[maxN],t[maxN*4];

int merge(int l, int r, int len){
    int x = __lg(len);
    if(x%2!=0){
        return (l|r);
    }
    else{
        return (l^r);
    }
}

void build(int n,int b, int e){
    if(b==e){
        t[n] = a[b];
        return;
    }
    int mid = (b+e)/2;
    int l = (2*n), r = (2*n)+1;
    build(l,b,mid);
    build(r,mid+1,e);
    t[n] = merge(t[l],t[r],(e-b+1));
}

void update(int n,int b,int e,int i, int v){
    if(i<b || i>e){
        return;
    }
    if(b==e){
        t[n] = v;
        return;
    }
    int mid = (b+e)/2;
    int l = (2*n), r = (2*n)+1;
    update(l,b,mid,i,v);
    update(r,mid+1,e,i,v);
    t[n] = merge(t[l],t[r],(e-b+1));
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    n = (1<<n);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    build(1,1,n);
    while(m--){
        int i,x;
        cin>>i>>x;
        update(1,1,n,i,x);
        cout<<t[1]<<'\n';
    }
    return 0;
}