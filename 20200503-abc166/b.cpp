#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, K, d;
  vector<int> ary;
  cin >> N >> K;

  for (int i = 0; i < K; i++)
  {
    cin >> d;
    for (int j = 0; j < d; j++)
    {
      int res;
      cin >> res;
      ary.push_back(res);
    }
  }
  sort(ary.begin(), ary.end());
  ary.erase(unique(ary.begin(), ary.end()), ary.end());
  int ans = N - ary.size();
  cout << ans << endl;
}

// AC