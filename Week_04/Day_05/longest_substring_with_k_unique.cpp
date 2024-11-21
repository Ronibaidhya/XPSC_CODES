//https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int l = 0,r = 0;
        int n = s.size();
        map<char,int> cnt;
        int ans = 0;
        while(r<n){
            cnt[s[r]]++;
            if(cnt.size()==k){
                ans = max(ans,r-l+1);
            }
            else{
                while(l<=r && cnt.size()>k){
                    cnt[s[l]]--;
                    if(cnt[s[l]]==0){
                        cnt.erase(s[l]);
                    }
                    l++;
                }
            }
            r++;
        }
        if(ans==0){
            return -1;
        }
        else {
            return ans;
        }
    }
};


int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    return 0;
}