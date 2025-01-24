//https://codeforces.com/problemset/problem/1272/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        map<char,int> mp;
        for(auto val:s){
            mp[val]++;
        }
        auto it1 = mp.find('L');
        auto it2 = mp.find('R');
        auto it3 = mp.find('U');
        auto it4 = mp.find('D');

        if(mp.size()<=3){
            if(it1!=mp.end() && it2!=mp.end()){
                cout<<"2\n";
                cout<<"LR\n";
            }
            else if(it3!=mp.end() && it4!=mp.end()){
                cout<<"2\n";
                cout<<"UD\n";
            }
            else{
                cout<<"0\n";
            }
        }
        else{
            int a = min(mp['U'],mp['D']);
            int b = min(mp['R'],mp['L']);
            cout<<2*(a+b)<<'\n';
            for(int i=0;i<a;i++){
                cout<<"D";
            }
            for(int i=0;i<b;i++){
                cout<<"L";
            }
            for(int i=0;i<a;i++){
                cout<<"U";
            }
            for(int i=0;i<b;i++){
                cout<<"R";
            }
            cout<<'\n';
        }
    }
    return 0;
}