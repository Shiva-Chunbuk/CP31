#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        int last = 0;
        int ans = INT_MIN;
        for (int i = 0; i < n; ++i)
        {
            ans = max(ans, v[i] - last);
            last = v[i];
        }
        ans = max(ans, 2 * (x - last));
        cout << ans << endl;
    }
}