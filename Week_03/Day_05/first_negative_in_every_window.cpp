//https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
#include<bits/stdc++.h>
#define ll long long int
using namespace std;


class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& a, int k) {
        vector<int> ans;
        queue<int> q;
        int l=0,r=0;
        int n = a.size();
        while(r<n){
            if(a[r]<0){
                q.push(a[r]);
            }
            if((r-l+1)==k){
                if(!q.empty()){
                    ans.push_back(q.front());
                    if(a[l]==q.front()){
                        q.pop();
                    }
                }
                else{
                    ans.push_back(0);
                }
                l++;
            }
            r++;
        }
        return ans;
    }
};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    return 0;
}