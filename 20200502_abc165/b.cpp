#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long X;
  cin >> X;
  long long money = 100;
  int cnr = 0;

  while (X >= money)
  {
    if (X != money)
    {
      money *= 1.01;
      cnr++;
    }
    else
    {
      break;
    }
  }
  cout << cnr << endl;
}

// AC