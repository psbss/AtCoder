#include <bits/stdc++.h>
using namespace std;

// --- バケット法を用いた解法 ---
// int main()
// {
//   int n;
//   int d[110];
//   cin >> n;
//   for (int i = 0; i < n; ++i)
//     cin >> d[i];

//   int num[110] = {0}; // バケット法
//   for (int i = 0; i < n; ++i)
//   {
//     num[d[i]]++;
//   }

//   int res = 0;
//   for (int i = 1; i <= 100; ++i)
//   {
//     if (num[i])
//     {
//       ++res;
//     }
//   }
//   cout << res << endl;
// }

// --- std::set を用いた解法 ---
// set の使い方 -> https://futurismo.biz/archives/1901
int main()
{
  int n;
  int d[110];
  cin >> n;
  for (int i = 0; i < n; ++i)
    cin >> d[i];

  set<int> values; // insert時に重複を取り除く
  for (int i = 0; i < n; ++i)
  {
    values.insert(d[i]); // 挿入
  }

  // set のサイズを出力する
  cout << values.size() << endl;
}