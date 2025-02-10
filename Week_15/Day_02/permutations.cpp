//https://leetcode.com/problems/permutations/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
class Solution {
    public:
        void fun(vector<int>& nums,vector<int>& a,vector<vector<int>> &ans,vector<int> &freq){
    
            if(a.size()==nums.size()){
                ans.push_back(a);
                return;
            }
    
            for(int i=0;i<freq.size();i++){
                if(!freq[i]){
                    a.push_back(nums[i]);
                    freq[i] = 1;
                    fun(nums,a,ans,freq);
                    a.pop_back();
                    freq[i] = 0;
                }
            }
        }
        vector<vector<int>> permute(vector<int>& nums) {
            vector<vector<int>> ans;
            vector<int> a;
            vector<int> freq(nums.size(),0);
            fun(nums,a,ans,freq);
            return ans;
        }
    };
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    return 0;
}