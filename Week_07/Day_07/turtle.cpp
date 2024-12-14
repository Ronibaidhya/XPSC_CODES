// //https://codeforces.com/contest/1981/problem/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;



int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int l = max(0,(n-m));
        int r = n+m;
        int ans = (l|(1<<__lg(l^r)+1)-1);
        cout<<ans<<'\n';
    }

    return 0;
}


// #include<bits/stdc++.h>
// #include<cmath>
// using namespace std;
// #define int long long
// signed main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int t;
//     cin>>t;
//     while(t--){
//         int n,m;
//         cin>>n>>m;
//         if(n==0){
//             if(m==0){
//                 cout<<0<<endl;
//             }
//             else{
//                 int p = log2(m);
//                 cout<<pow(2,p+1)-1<<endl;
//             }
//         }
//         else{
//             int l = max(0ll,n-m);
//             int r = n+m;
//             int p = 0;
//             for(int i=0; i<40; i++){
//                 if(((l>>i)&1)!=((r>>i)&1)){
//                     p = max(p,i);
//                 }
//             }
//             int x = pow(2,p)-1;
//             int ans = r|x;
//             cout<<ans<<endl;
//             // cout<<endl;
//         }
//     }
// }