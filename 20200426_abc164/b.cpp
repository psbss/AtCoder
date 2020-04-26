#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c, d, i, j;
  cin >> a >> b >> c >> d;

  for (i = 0; i < 100; i++)
  {
    c -= b;

    if (c <= 0)
      break;
  }
  for (j = 0; j < 100; j++)
  {
    a -= d;
    if (a <= 0)
      break;
  }
  if (i <= j)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}