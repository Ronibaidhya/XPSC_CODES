//https://codeforces.com/problemset/problem/1742/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        vector<vector<char>> v;
        for(int i=0;i<8;i++){
            vector<char> temp;
            for(int j=0;j<8;j++){
                char x;
                cin>>x;
                temp.push_back(x);
            }
            v.push_back(temp);
        }
        bool flag = false;
        for(auto i:v){
            char x = 'R';
            bool temp = true;
            for(auto j:i){
                if(x!=j){
                    temp = false;
                }
            }
            if(temp) flag = true;
        }
        if(flag) cout<<"R\n";
        else cout<<"B\n";
    }
    return 0;
}