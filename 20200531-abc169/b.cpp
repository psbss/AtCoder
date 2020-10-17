#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  unsigned long long ans = 1;

  for (int i = 0; i < N; i++)
  {
    unsigned long long in = 0;
    cin >> in;
    ans *= in;
  }

  if (ans > 1000000000000000000)
    cout << "-1" << endl;
  else
    cout << ans << endl;
}