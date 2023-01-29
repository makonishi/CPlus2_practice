#include <stdio.h>
// 3の倍数のときは「Fizz」と出力
// 5の倍数のときは「Buzz」と出力
// 3と5の公倍数のときは「FizzBuzz」と出力
// それ以外のときは、「5または3の倍数ではありません」と出力

int main(){
    int num;
    printf("数値を入力: ");
    // 整数を標準入力
    scanf("%d",&num);
    if(num % 15 == 0){
        printf("FizzBuzz\n");
    } else if (num % 5 == 0) {
      printf("Buzz\n");
    } else if (num % 3 == 0) {
      printf("Fizz\n");
    } else {
      printf("%dは5または3の倍数ではありません。", num);
    }
}