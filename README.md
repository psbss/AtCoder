# Learning record of AtCoder

> Using C++ Language

Begin at 24 April 2020

## Build & Debug

各コンテスト毎にディレクトリを作成する。中には解答を書いた.cpp ファイルを入れる。

```bash
./
├── 20200424
│   ├── a-product.cpp
│   └── welcome_to_atcoder.cpp
├── 20200425
├── 20200426_abc164
.
.
.
├── README.md
└── tmp
    ├── input.txt
    └── out
```

それぞれのファイル内でデバッグを行う事ができる。このとき、`tmp/input.txt`に入力を入れておく事で、入力の半自動化が可能。

ビルドして生成される実行ファイルは``tmp/out`に出力される。
