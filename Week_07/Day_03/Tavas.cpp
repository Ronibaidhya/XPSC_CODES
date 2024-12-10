// https://codeforces.com/problemset/problem/535/B
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int check_kth_bit_on_or_off(int n,int k){
    return (n>>k)&1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    set<int> s;
    string z = to_string(n);
    int sz = z.size();
    for (int x = 1; x <= sz; x++)
    {
        for (int i = 0; i < (1 << x); i++)
        {
            string z;
            for (int j = 0; j < x; j++)
            {
                int a = (i>>j)&1;
                if(a){
                    z.push_back('4');
                }
                else{
                    z.push_back('7');
                }
            }
            int ans = stoi(z);
            s.insert(ans);
        }
    }
    auto it = s.find(n);
    cout<<distance(s.begin(),it)+1;
    return 0;
}



    // #include <iostream>
     
    // using namespace std;
     
    // int main() {
    // 	int n;
    // 	cin >> n;
    // 	int len = 0;
    // 	int ans = 0;
    // 	while (n) {
    // 		if (n % 10 == 7)
    // 			ans += (1 << len);
    // 		n /= 10;
    // 		len++;
    // 	}
    // 	for (int i = 1; i < len; i++)
    // 		ans += (1 << i);
    // 	cout << ans + 1 << endl;
    // 	return 0;
    // }