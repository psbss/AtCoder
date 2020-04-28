# std:: について

AtCoder で公開されている C++ 学習ページでは```.cpp```を使うときに
```cpp
#include <bits/stdc++.h>
using namespace std;
```
と書くように記載されている。

```#include ~~``` はライブラリのインクルードとして、```using namespace std;``` とはなにか？

## Ans.

C++ で用いられる“名前空間”という機能によるもの。  
他のモジュールの名前と変数や機能が衝突しないように、格納するデータに住所を割り当てる。

例：
```cpp
#include <bits/stdc++.h>
int main() {
  std::hogehoge << "fuga";
  return 0;
}
```

と記載すると、std地区のhogehogeという住所が割り当てられる。

でも、毎回書くのは面倒なので、```using namespace std;```と記載することで、```std::```と記載しなくても、名前空間を明示できる。