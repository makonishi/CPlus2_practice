#include <stdio.h>
// 変数の扱い方

int main(){
  int a; // 変数の宣言
  int b = 3; // 初期化と代入
  int add, sub; // 複数の変数を宣言
  double avg; // int以外の変数の宣言
  a = 6; // 代入(最初に値を入れるため、初期化している)
  add = a + b; // aとbの和を求める
  sub = a - b; // aとbの差を求める
  avg = (a + b) / 2.0; // aとbの平均値を求める

  printf("%d + %d = %d\n", a, b, add);  //-> 6 + 3 = 9
  printf("%d - %d = %d\n", a, b, sub); //-> 6 - 3 = 3
  printf("%dと%dの平均値: %f\n", a, b, avg); //-> 6と3の平均値: 4.5
}