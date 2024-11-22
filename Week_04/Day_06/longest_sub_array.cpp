// https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class Solution
{
public:
    int lenOfLongestSubarr(vector<int> &a, int k)
    {
        int n = a.size();
        int ans = 0;
        vector<long long int> v(n);
        v[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            v[i] = v[i - 1] + a[i];
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == k)
            {
                ans = max(ans, i + 1);
            }
            auto it = mp.find(v[i] - k);
            auto it1 = mp.find(v[i]);
            if (it1 == mp.end())
            {
                mp[v[i]] = i;
            }
            if (it != mp.end())
            {
                ans = max(ans, i - mp[v[i] - k]);
            }
        }
        return ans;
    }
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> v(n);
    v[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        v[i] = v[i - 1] + a[i];
    }
    int ans = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == k)
        {
            ans = max(ans, i + 1);
        }
        auto it = mp.find(v[i] - k);
        auto it1 = mp.find(v[i]);
        if (it1 == mp.end())
        {
            mp[v[i]] = i;
        }
        if (it != mp.end())
        {
            ans = max(ans, i - mp[v[i] - k]);
        }
    }
    cout << ans << '\n';
    return 0;
}