#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long A, B, N;
  cin >> A >> B >> N;
  long long x = min(B - 1, N);
  int ans = (A * x) / B - A * (x / B);
  cout << ans << endl;
}