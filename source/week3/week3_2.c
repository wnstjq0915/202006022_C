#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;
    int result = 0;

    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a+b);

    result = a - b;
    printf("%d - %d = %d\n", a, b, result);

    result = a * b;
    printf("%d * %d = %d\n", a, b, result);
    printf("%d / %d = %f", a, b, (float) a / b); // %f인거 주의
    // (float)으로 캐스팅하여 형변환

    // scanf가 두 개 이상인데 진행에 문제가 있으면
    // getChar(); 중간에 사용하기

    return 0;
}