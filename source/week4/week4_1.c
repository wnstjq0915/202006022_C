#include <stdio.h>
int main(void){

    short num1;     // short 정수형 변수
    int num2;       // int 정수형 변수
    long long num3; // long long 정수형 변수

    printf("자료형의 크기를 구하는 함수: sizeof( ) 함수\n");
    printf("1. short형 변수: %d바이트\n", sizeof(num1));
    printf("2. int형 변수: %d바이트\n", sizeof(num2));
    printf("3. long long형 변수: %d바이트\n", sizeof(num3));
    printf("1바이트는 8비트입니다.\n");
    printf("4. short형 변수: %d비트\n", sizeof(num1) * 8);
    printf("5. int형 변수: %d비트\n", sizeof(num2) * 8);
    printf("6. long long형 변수: %d비트\n", sizeof(num3) * 8);

    signed short a = 32767;
    printf("%d\n", a);
    a = 32768;
    printf("%d\n", a);
    a = 60000;
    printf("%d\n", a);

    // 8진수는 %o, 16진수는 %s

    return 0;
}