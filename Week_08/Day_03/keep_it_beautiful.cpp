// https://codeforces.com/problemset/problem/1841/B
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        string s;
        vector<int> temp;
        temp.push_back(v[0]);
        s.push_back('1');
        bool flag = true;
        for(int i=1;i<n;i++){
            if(temp.back()<=v[i] && flag){
                temp.push_back(v[i]);
                s.push_back('1');
            }
            else if(temp.front()>=v[i] && flag){
                temp.push_back(v[i]);
                s.push_back('1');
                flag = false;
            }
            else if(!flag && temp.back()<=v[i] && temp.front()>=v[i]){
                temp.push_back(v[i]);
                s.push_back('1');
            }
            else{
                s.push_back('0');
            }
        }
        cout<<s<<'\n';
    }
    return 0;
}