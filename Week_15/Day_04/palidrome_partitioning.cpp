// https://leetcode.com/problems/palindrome-partitioning/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class Solution
{
public:
    bool palindrome(string &s,int l,int r){
        while(l<=r){
            if(s[l]!=s[r]){
                return false;
            }
            l++,r--;
        }
        return true;
    }
    void fun(int idx,vector<vector<string>> &ans,vector<string> &t,string &s,int n){
        if(idx==n){
            ans.push_back(t);
            return;
        }
        for(int i=idx;i<n;i++){
            if(palindrome(s,idx,i)){
                t.push_back(s.substr(idx,i-idx+1));
                fun(i+1,ans,t,s,n);
                t.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s)
    {
        vector<vector<string>> ans;
        vector<string> t;
        fun(0,ans,t,s,s.size());
        return ans;
    }
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    return 0;
}