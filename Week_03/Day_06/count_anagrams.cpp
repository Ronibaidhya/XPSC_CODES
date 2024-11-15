// https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class Solution
{
public:
    int search(string pat, string txt)
    {
        int a = pat.size(),b = txt.size();
        multiset<char> s;
        multiset<char> ans;
        for (char x : pat)
        {
            s.insert(x);
        }
        int cnt = 0, l = 0, r = 0;
        while (r < b)
        {
            ans.insert(txt[r]);
            if ((r - l + 1) == a)
            {
                if (s == ans)
                {
                    cnt++;
                }
                auto i = ans.find(txt[l]);
                if (i != s.end())
                {
                    ans.erase(i);
                }
                l++;
            }
            r++;
        }
        return cnt;
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string a, b;
    cin >> a >> b;

    int k = a.size();
    multiset<char> s;
    for (int i = 0; i < k; i++)
    {
        s.insert(a[i]);
    }
    multiset<char> ans;
    int cnt = 0;
    int l = 0, r = 0;
    while (r < b.size())
    {
        ans.insert(b[r]);
        if ((r - l + 1) == k)
        {
            if (s == ans)
            {
                cnt++;
            }
            auto i = ans.find(b[l]);
            if (i != s.end())
            {
                ans.erase(i);
            }
            l++;
        }
        r++;
    }
    cout << cnt << endl;
    return 0;
}