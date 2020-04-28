#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string a[n];

  for (int i = 0; i < n; i++)
    cin >> a[i];

  set<string> data;
  for (int i = 0; i < n; i++)
  {
    data.insert(a[i]);
  }

  cout << data.size() << endl;
}

// AC