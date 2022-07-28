/*
 Welocome to AtCoderの解答例
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  string s;
  cin >> s;

  cout << (a + b + c) << " " << s << endl;
  return 0;
}


/*
 コメントアウト
*/
// 1行のコメント
// これはコメントになる

// 複数行のコメント
/*ここから

コメント

ここまで*/


/*
 標準ライブラリのインクルード
*/
#include <bits/stdc++.h>
#include<iostream>


/*
 名前空間
*/
// use しない場合 -> std::付ける
int main() {
  std::cout << "Hello " << std::endl;
  return 0;
}

// use する場合 -> std不要
using namespace std;

int main() {
  cout << "Hello " << endl;
  return 0;
}


/*
 入力
*/
// 入力の受け取り
int a;
cin >> a;

// 複数入力の受け取り
int a, b, c;
cin >> a >> b >> c;


/*
 出力
*/
// 文字列の出力
cout << "Hello, World" << endl; =>  // Hello, World

// 複数に分けて出力もできる
cout << "Hello" << ", " << "World" << endl; // => Hello, World

// 変数の出力
string s = "Hello, World";
cout << s << endl; // => Hello, World


/*
 文字列の宣言
*/
// s.size() または s.length() : 文字列の長さの取得
// s.at(i) または s[i] : i番目の文字。0から始まる

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s = "hello world";

  // 文字列の長さ
  cout << s.size() << endl; // => 11
  cout << s.length() << endl; // => 11

  // 6番目の文字
  cout << s.at(6) << endl; // => w
  cout << s[6] << endl; // => w
  return 0;
}


/*
 配列(vector<型>配列変数名(要素数)で宣言)
*/
// 配列vについて
// v.size(): 要素数の取得
// v.at(i) または v[i]: i番目の要素。0から始まる
int main() {
  vector<string> v;
  v = {"zero", "one", "tow", "three", "four", "five"};

  // 配列の要素数
  cout << v.size() << endl; // => 6

  // 3番目の要素
  cout << v.at(3) << endl; // => three
  cout << v[3] << endl; // => three
  return 0;
}

// 型 配列変数名[要素数]で宣言もできる => v.size() や v.at(i) は使えない
int main() {
  string v[] = {"zero", "one", "two", "three", "four", "five"};

  cout << v[3] << endl; // => three
  return 0;
}


/*
 2次元配列
*/
// vector<vector<型>> 配列変数名(要素数1, vector<型>(要素数2, 初期値)) で宣言
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<int>> v(2, vector<int>(3));
  v = {
    {0, 1, 2},
    {3, 4, 5},
  };

  // 配列の要素数
  cout << v.size() << endl; // => 2
  cout << v.at(0).size() << endl; // => 3

  // 1行目2行目の要素
  cout << v.at(1).at(2) << endl; // => 5 ※2次元配列の要素は0から始まる
  return 0;
}

// 型 配列変数名[要素数1][要素数2]で宣言も可能
#include <bits/stdc++.h>
using namespace std;

int main() {
  int v[2][3] = {
    {0, 1, 2},
    {3, 4, 5},
  };

  // 1行目1列目の要素
  cout << v[1][1] << endl; // => 4
  return 0;
}


/*
 if 文
*/
//
if (a > b) {
  cout << "a > b" << endl;

} else if (a < b) {
  cout << "a < b" << endl;

} else {
  cout << "a = b" << endl;

}

/*
 三項演算子
*/
cout << ((a * b) % 2 == 0 ? "Even" : "Odd") << endl;


/*
繰り返し
*/
// for 文
for (int i = 1; i < 5; i++) {
  cout << i << "回目" << endl;
}

// while文
int i = 1;
while (i < 5) {
  cout << i << "回目" << endl;
  i++;
}

/*
 braek
*/
// break
for (int i = 1; i < 5; i++) {
  if (i == 3) {
    break;
  }
  cout << i << "回目" << endl;
}

// 出力結果
/*
1回目
2回目
*/

/*
 continue
*/
for (int i = 1; i < 5; i++ ) {
  if (i == 3) {
    continue;
  }
  cout << i << "回目" << endl;
}

// 出力結果
/*
1回目
2回目
4回目
*/


/*
 並び替え
*/
// 配列の並び替え（昇順）sort(vec.begin(), vec.end())
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v = {3, 8, 6, 1, 2, 7, 5, 4};

  // 配列の並び替え（昇順
  sort(v.begin(), v.end());

  // 配列の出力
  for (int i = 0; i < v.size(); i++) {
    if (i > 0) {
      cout << " ";
    }
    cout << v[i]; // => 1 2 3 4 5 6 7 8
  }

  return 0;
}

// 配列の並び替え（降順）reverse(vec.begin(), vec.end())
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v = {3, 8, 6, 1, 2, 7, 5, 4};

  // 配列の並び替え（昇順）
  sort(v.begin(), v.end());

  // 配列を逆に並び替え（降順）
  reverse(v.begin(), v.end());

  // 配列の出力
  for (int i = 0; i < v.size(); i++) {
    if (i > 0) {
      cout << " "
    }
    cout << v[i]; // => 8 7 6 5 4 3 2 1
  }

  return 0;
}

// 降順の別の並べ替え方 => sort(vec.begin(), vec.end(), greater<int>())
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v = {3, 8, 6, 1, 2, 7, 5, 4};

  // 配列の並び替え（降順）
  sort(v.begin(), v.end(), greater<int>());

  // 配列の出力
  for (int i = 0; i < v.size(); i++) {
    if (i > 0) {
      cout << " ";
    }
    cout << v[i]; => // 8 7 6 5 4 3 2 1
  }

  return 0;
}

/*
 重複削除
*/
// 配列vecをsortで並べ替えた後、「vec.erase(unique(vec.begin(), vec.end()), vec.end())」でvecの重複を削除する
// 要素数も変わる
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v = {3, 1, 1, 2, 3, 2, 3, 1, 2};

  // 配列の並び替え（昇順）
  sort(v.begin(), v.end());
  // 配列の重複削除
  v.erase(unique(v.begin(), v.end()), v.end());

  // 配列出力
  for (int i = 0; i < v.size(); i++) {
    if (i > 0) {
      cout << " ";
    }
    cout << v[i]; // => 1 2 3
  }

  // 配列の要素数
  cout << endl << v.size(); // => 3
  return 0;
}

/*
 関数
*/
// 「戻り値の型 関数名(引数1の型 引数1の名前, 引数2の型 引数2の名前, ... ) {}」で定義する
#include <bits/stdc++.h>
using namespace std;

// 関数定義
int add(int a, int b) {
  return a + b;
}

int main()  {
  int a = 10;
  int b = 5;
  cout << add(a, b) << endl; // => 15
}

/*
 pair
*/
// 「pair<値1の型, 値2の型> 変数名」で2つの値の組を作れる
/*
 * 1番目の値へのアクセス：変数名.first
 * 2番目の値へのアクセス：変数名.second
 */
 pair<int, string> p;
 p make_pair(1, "one")

 // 宣言と同時に値を入れることもできる
 // pair<int, stirng> p(1, "one");

 cout << p.first << endl; // => 1
 cout << p.secod << endl; // => one

/*
 マクロ
*/
// C++は、マクロと呼ばれる機能がある。マクロを使うことにより、
// 「指定した文字列をプログラムの中で置き換える」ことができる => #define マクロ名 置き換えるプログラム
#include <bits/stdc++.h>
using namespace std;

// マクロの定義
#define rep(i, n) for (int i = 0; i < n; i++)

int main() {
vector<int> v = {1, 10, 100};
rep(i, v.size()) cout << v[i] <<endl;
}

// 出力結果
/*
1
10
100
*/

/*
再帰関数
*/
/*
・ある関数の中で同じ関数を呼び出すことを「再帰呼び出し」という
・再帰を行うような関数を「再帰関数」という
・再帰呼び出しを行わずに完了できる処理→ベースケース
・再帰呼び出しを行い、その結果を用いて行う処理→再帰ステップ
・再帰関数の実装方法3ステップ
  1. 「引数」「返り値」「処理内容」を決める
  2. 再帰ステップの実装
  3. ベースケースの実装
*/

// 「0からnまでの総和を計算する関数」
#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
  if (n == 0) {
     return 0;
  }

  // sum関数の中でsum関数を呼び出している
  int s = sum(n - 1);
  return s + n;
}

int main() {
  cout << sum(2) << endl; // 0 + 1 + 2 = 3
  cout << sum(3) << endl; // 0 + 1 + 2 + 3 = 6
  cout << sum(10) << endl; // 0 + 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55
}

// ベースケースと再帰ステップ
int sum(int n) {
  // ベースケース
  if (n == 0) {
    return 0;
  }

  // 再帰ステップ
  int s = sum(n - 1);
  return s + n;
}

// AからBまでの総和を求める関数を再帰関数で実装する
int sum_range(int a, int b) {
  // ベースケース
  if (a == b) {
    return a;
  }
  // 再帰ステップ
  return sum_range(a, b - 1) + b;
}

int main() {
  cout << sum_range(0, 4) << endl; // 0 + 1 + 2 + 3 + 4 = 10
  cout << sum_range(5, 8) << endl; // 5 + 6 + 7 + 8 = 26
}