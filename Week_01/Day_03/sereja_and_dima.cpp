//https://codeforces.com/contest/381/problem/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    deque<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int s = 0, d = 0;
    bool flag = false;
    while(!v.empty()){
        if(!flag){
            flag = true;
            if(v.back()>v.front()){
                s+=v.back();
                v.pop_back();
            }
            else{
                s+=v.front();
                v.pop_front();
            }
        }
        else{
            flag = false;
            if(v.back()>v.front()){
                d+=v.back();
                v.pop_back();
            }
            else{
                d+=v.front();
                v.pop_front();
            }
        }
    }
    cout<<s<<" "<<d;
    return 0;
}