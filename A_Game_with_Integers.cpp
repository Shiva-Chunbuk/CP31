#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   vector<int> v(n);
   for (auto &i : v)
      cin >> i;
   // cout << "First" << endl;
   // int cnt=1;
   for (int i = 0; i < n; ++i)
   {
      if (v[i] % 3 == 0)
         cout << "Second" << endl;
      else
      {
         cout << "First" << endl;
         // cnt++;
      }
   }
   // if(cnt>=10)cout<<"First"<<endl;
}