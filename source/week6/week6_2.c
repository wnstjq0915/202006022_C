#include <stdio.h>
void main(){
    int num = 120;
    printf("%d", 120%num);
    // 원래는 상수가 연산자 왼쪽에 있으면 에러가 나지만
    // 컴파일러가 자동처리해서 상수가 왼쪽에 있어도 처리됨.
    // 혹시 모르니 변수를 왼쪽에 놓도록.

    // 관습적으로는 상수가 왼쪽가면 안됨.
}