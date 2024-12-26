// https://codeforces.com/problemset/problem/1216/D
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mx = max(mx, v[i]);
    }
    ll p = 0;
    int sw = 0;
    for (int i = 0; i < n; i++)
    {
        if(v[i]!=mx){
            sw = __gcd(sw, mx - v[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] != mx)
        {
            p = p + ((mx - v[i]) / sw);
        }
    }
    cout << p << " " << sw << '\n';
    return 0;
}