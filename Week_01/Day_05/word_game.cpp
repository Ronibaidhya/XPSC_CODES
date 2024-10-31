//https://codeforces.com/problemset/problem/1722/C\

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
        map<string,vector<int>> mp;
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                string s;
                cin>>s;
                mp[s].push_back(i);
            }
        }
        vector<int> v(3);
        for(auto[x,y]:mp){
            if(y.size()==2){
                v[y[0]]++;
                v[y[1]]++;
            }
            else if(y.size()==1){
                v[y[0]]+=3;
            }
        }
        for(int value:v){
            cout<<value<<" ";
        }
        cout<<endl;
    }
    return 0;
}
























// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         map<string,int> mp;
//         vector<string> a,b,c;
//         for(int i=0;i<3;i++){
//             for(int j=0;j<n;j++){
//                 string s;
//                 cin>>s;
//                 mp[s]++;
//                 if(i=0){
//                     a.push_back(s);
//                 }
//                 else if(i=1){
//                     b.push_back(s);
//                 }
//                 else{
//                     c.push_back(s);
//                 }
//             }
//             if(i=0){
//             }
//         }
//     }
//     return 0;
// }

