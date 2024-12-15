//https://www.codechef.com/problems/STRAME
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int> mp;
        for(char x: s){
            mp[x]++;
        }
        if(mp.size()==1){
            cout<<"Ramos\n";
        }
        else{
            int i = 0;
            while(mp['0']>0 && mp['1']>0){
                mp['0']--,mp['1']--;
                i++;
            }
            if(i%2==0){
                cout<<"Ramos\n";
            }
            else{
                cout<<"Zlatan\n";
            }
        }
    }
    return 0;
}