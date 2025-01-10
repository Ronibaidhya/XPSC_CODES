// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/F
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string t, p;
    cin >> t >> p;
    int n = t.size(), m = p.size();
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i]--;
    }

    auto ok = [&](int del)
    {
        vector<bool> bad(n, false);
        for (int i = 0; i <= del; i++)
        {
            bad[v[i]] = true;
        }

        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (!bad[i] && t[i] == p[j])
            {
                j++;
            }
            if (j == m)
            {
                return true;
            }
        }
        return false;
    };
    int l = 0, r = n - 1, mid, ans = -1;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout<<ans+1<<'\n';
    return 0;
}
