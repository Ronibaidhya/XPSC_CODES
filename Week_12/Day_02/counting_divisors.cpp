//https://cses.fi/problemset/task/1713
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1e6+3;
vector<int> divisors(N);
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    for(int i=1;i<N;i++){
        for(int j=i;j<N;j+=i){
            divisors[j]++;
        }
    }
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        cout<<divisors[x]<<"\n";
    }
    return 0;
}