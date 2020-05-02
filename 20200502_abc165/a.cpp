#include <bits/stdc++.h>
using namespace std;

int main()
{
  int K, a, b;
  cin >> K >> a >> b;
  int i;

  for (int i = 0; i < 1000; i++)
  {
    int N = K;
    N *= i;
    if (a <= N && N <= b)
    {
      cout << "OK" << endl;
      break;
    }
    else if (N >= b)
    {
      cout << "NG" << endl;
      break;
    }
  }
}

// AC