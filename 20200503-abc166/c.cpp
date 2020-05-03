#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  int ary[n];
  vector<int> win, lose;

  for (int i = 0; i < n; i++)
    cin >> ary[i];

  for (int i = 0; i < m; i++)
  {
    int l, r;
    cin >> l >> r;
    if (ary[l] - ary[r] > 0)
    {
      win.push_back(l);
      lose.push_back(r);
    }
    else
    {
      win.push_back(r);
      lose.push_back(l);
    }
  }
  sort(win.begin(), win.end());
  win.erase(unique(win.begin(), win.end()), win.end());
  cout << win.size() << endl;
}

// WA / TLE