//https://codeforces.com/problemset/problem/1468/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    set<pair<int,int>> s;
    multiset<pair<int,int>> ml;
    int t;
    cin>>t;
    int customer = 1;
    for(int i=1;i<=t;i++){
        int x;
        cin>>x;
        if(x==1){
            int tk;
            cin>>tk;
            s.insert({customer,tk});
            ml.insert({tk,-customer});
            customer++;
        }
        else if(x==2){
            int pos = s.begin()->first;
            int tk = s.begin()->second;
            s.erase(s.begin());
            ml.erase({tk,-pos});
            cout<<pos<<" ";
        }
        else if(x==3){
            int pos = -ml.rbegin()->second;
            int tk = ml.rbegin()->first;
            ml.erase(--ml.end());
            s.erase({pos,tk});
            cout<<pos<<" ";
        }
    }
    return 0;
}