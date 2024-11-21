//https://codeforces.com/problemset/problem/1692/E
// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//         int n,s;
//         cin>>n>>s;
//         vector<int> v(n);
//         int sum = 0;
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//             sum+=v[i];
//         }
//         if(sum==s){
//             cout<<"0\n";
//             continue;
//         }
//         else if(sum<s){
//             cout<<"-1\n";
//             continue;
//         }

//         int l=0,r = n-1;
//         int cnt = 0;
//         while(l<r){
//             if(sum==s){
//                 break;
//             }
//             if(v[l]==1){
//                 cnt++;
//                 sum--;
//                 l++;
//             }
//             else if(v[r]==1){
//                 cnt++;
//                 sum--;
//                 r--;
//             }
//             else{
//                 cnt+=2;
//                 l++,r--;
//             }
//         }
//         cout<<cnt<<'\n';
//     }
//     return 0;
// }
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int l=0,r=0,ans = INT_MIN;
        int sm = 0;
        while(r<n){
            sm+=v[r];
            if(sm==s){
                ans = max(ans,r-l+1);
            }
            else{
                while(l<=r && sm>s){
                    sm-=v[l];
                    l++;
                }
                if(sm==s){
                    ans = max(ans,r-l+1);
                }
            }
            r++;
        }
        if(ans==INT_MIN){
            cout<<"-1\n";
        }
        else{
            cout<<n-ans<<'\n';
        }
    }
    return 0;
}
