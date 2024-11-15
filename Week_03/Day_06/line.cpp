// https://codeforces.com/problemset/problem/1722/D
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll val = 0;
        priority_queue<ll> pq;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                v[i] = (i - 0);
                val = val + (i - 0);
            }
            else
            {
                v[i] = (n - 1 - i);
                val = val + (n - 1 - i);
            }
            if (i < (n / 2))
            {
                if (s[i] != 'R')
                {
                    ll d = (n - i - 1) - v[i];
                    pq.push(d);
                }
            }
            else
            {
                if (s[i] != 'L')
                {
                    ll d = (i - 0) - v[i];
                    if (n % 2 != 0 && i == (n / 2))
                    {
                    }
                    else
                    {
                        pq.push(d);
                    }
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (!pq.empty())
            {
                val = val + pq.top();
                pq.pop();
            }
            cout << val << " ";
        }
        cout << '\n';
    }

    return 0;
}