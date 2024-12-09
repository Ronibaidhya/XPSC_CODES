//https://www.codechef.com/problems/PALIXOR
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1LL<<15;
vector<int> palindrome;

bool isPalindrome(int x){
    string s = to_string(x);
    int sz = s.size();
    for(int i=0;i<sz/2;i++){
        if(s[i]!=s[sz-i-1]){
            return false;
        }
    }
    return true;
}

void make_palindrome(){
    for(int i=0;i<N;i++){
        if(isPalindrome(i)){
            palindrome.push_back(i);
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    make_palindrome();
    // for(auto x: palindrome){
    //     cout<<x<<" ";
    // }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        vector<int> s(N+1);
        for(int i=0;i<n;i++){
            cin>>v[i];
            s[v[i]]++;
        }
        ll ans = n;
        for(int x:v){
            for(int val:palindrome){
                int cur = (x^val);
                ans+=s[cur];
            }
        }
        cout<<ans/2<<'\n';
    }
    return 0;
}