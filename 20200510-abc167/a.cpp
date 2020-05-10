#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s, t;
  cin >> s >> t;
  int length = s.length();
  if (s.length() == t.length() || s.length() + 1 < t.length())
  {
    cout << "No" << endl;
    return 0;
  }
  for (int i = 0; i < length; i++)
  {
    if (s[i] != t[i])
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}