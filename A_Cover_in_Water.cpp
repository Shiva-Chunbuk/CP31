#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0, dots = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '.')
            {
                ++cnt;
                ++dots;
            }
            else
            {
                cnt = 0;
            }
            if (cnt >= 3)
            {
                cout << "2" << endl;
                break;
            }
        }
        if (cnt < 3)
        {
            cout << dots << endl;
        }
    }
}
