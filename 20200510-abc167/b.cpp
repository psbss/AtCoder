#include <bits/stdc++.h>
using namespace std;

int main()
{
  int A, B, C, K;
  int a = 1,
      b = 0, c = -1;
  int ans = 0, i = 0;

  cin >> A >> B >> C >> K;

  if (K <= A)
  {
    A = K;
    ans = A * a;
    i = A;
  }
  if (K <= B && i < K)
  {
    B = K;
    ans = B * b;
    i = B;
  }
  if (K <= C && i < K)
  {
    C = K;
    ans = C * c;
    i = C;
  }

  if (i < K && 0 < A)
  {
    ans += A;
    i += A;
  }
  if (i < K && 0 < B)
  {
    i += B;
  }
  if (i < K && 0 < B)
  {
    ans = (K - i) * c;
    i += C;
  }

  cout << ans << endl;
}