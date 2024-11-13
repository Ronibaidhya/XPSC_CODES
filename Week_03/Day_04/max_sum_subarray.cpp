//https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

class Solution {
  public:
    long long maximumSumSubarray(vector<int>& a, int k) {
        // code here
        int n = a.size();
        int l = 0 ,r = 0;
        long long int ans = 0,sum = 0;
        while(r<n){
            sum+=a[r];
            if((r-l+1)==k){
                ans = max(ans,sum);
                sum-=a[l];
                l++,r++;
            }
            else{
                r++;
            }
        }
        return ans;
    }
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    return 0;
}