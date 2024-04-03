#include <stdio.h>
void main(){
    int val, a;

    a = 8;
    val = ++a;

    printf("a = 8일 때\n");

    // 전위 증감연산자는 해당 줄에서 가장 빠르게 실행된 뒤에 해당 줄 실행
    printf("1.val = ++a이면 val = %d, a = %d\n", val, a);

    a = 8;
    val = a++;

    // 후위 증감연산자는 해당 줄이 실행된 뒤에 실행
    printf("2.val = a++이면 val = %d, a = %d\n", val, a);
}