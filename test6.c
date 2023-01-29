// if文
#include <stdio.h>

int main(){
    int a;
    printf("数値を入力: ");
    // 整数を標準入力
    scanf("%d",&a);
    // 入力した値が正の数かどうか調べる 
    if(a > 0){
        printf("入力した値は正の数です。\n");  // 正の数なら実行
    }
}