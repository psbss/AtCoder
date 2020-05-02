#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, ary[210];
  cin >> N;
  for (int i = 0; i < N; i++)
    cin >> ary[i];

  int cnr;

  while (true)
  {
    bool is_odd = false;
    for (int i = 0; i < N; i++)
    {
      if (ary[i] % 2 != 0)
      {
        is_odd = true;
      }
    }
    if (is_odd == true)
      break;

    for (int i = 0; i < N; i++)
    {
      ary[i] /= 2;
    }
    cnr++;
  }
  cout << cnr << endl;
}