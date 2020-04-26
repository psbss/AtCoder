#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, cnr = 0;
  std::cin >> n;
  string a[n], b[n];

  for (int i = 0; i < n; i++)
  {
    std::cin >> a[i];
    for (int j = 0; j < n; j++)
    {
      if (b[j] == a[i] || a[j] == "NULL")
        break;
      if (j + 1 == n)
      {
        b[i] = a[i];
        cnr++;
      }
    }
  }
  cout << cnr << endl;
}