// //https://codeforces.com/problemset/problem/1997/A
// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         if(s.size()==1){
//             if(s[0]=='z'){
//                 cout<<s<<"a";
//             }
//             else cout<<s<<char(s[0]+1);
//         }
//         else{
//             bool flag = true;
//             for(int i=0;i<(s.size()-1);i++){
//                 if(flag && s[i]==s[i+1]){
//                     if(s[i]!='z'){
//                         cout<<s[i]<<char(s[i]+1);
//                     }
//                     else{
//                         cout<<s[i]<<"a";
//                     }
//                     flag = false;
//                 }
//                 else{
//                     cout<<s[i];
//                 }
//             }
//             cout<<s.back();
//             if(flag){
//                 cout<<s[0];
//             }
//         }
//         cout<<'\n';
//     }
//     return 0;
// }



//https://codeforces.com/problemset/problem/1997/A
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
        if(s.size()==1){
            if(s[0]=='z'){
                cout<<s<<"a";
            }
            else cout<<s<<char(s[0]+1);
        }
        else{
            bool flag = true;
            map<char,bool> mp;
            for(int i=0;i<(s.size()-1);i++){
                if(flag && s[i]==s[i+1]){
                    if(s[i]!='z'){
                        cout<<s[i]<<char(s[i]+1);
                    }
                    else{
                        cout<<s[i]<<"a";
                    }
                    flag = false;
                }
                else{
                    mp[s[i]] = true;
                    cout<<s[i];
                }
            }
            cout<<s.back();
            mp[s.back()] = true;
            if(flag){
                for(char i ='a';i<='z';i++){
                    auto it = mp.find(i);
                    if(it==mp.end()){
                        cout<<i;
                        break;
                    }
                }
                // cout<<s[0];
            }
        }
        cout<<'\n';
    }
    return 0;
}