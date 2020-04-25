#include <bits/stdc++.h>
using namespace std;

int main()
{
  // int a, b, c;
  // cin >> a >> b >> c;
  // cout << a + b + c << endl;
  // 入力は文字列として与えられているので上記は利用不可

  // string s;
  // int cnr;
  // cin >> s;

  // if (s[1] == '1')
  //   cnr++;
  // if (s[2] == '1')
  //   cnr++;
  // if (s[3] == '1')
  //   cnr++;

  // cout << cnr << endl;
  // 初期化不足と、配列間違い

  // string s;
  // int cnr = 0;
  // cin >> s;

  // if (s[0] == '1')
  //   cnr++;
  // if (s[1] == '1')
  //   cnr++;
  // if (s[2] == '1')
  //   cnr++;

  // cout << cnr << endl;
  // ループを使ってみる

  string s;
  int cnr = 0;
  cin >> s;
  for (int i = 0; i < 3; i++)
  {
    if (s[i] == '1')
      cnr += 1;
  }
  cout << cnr << endl;
}